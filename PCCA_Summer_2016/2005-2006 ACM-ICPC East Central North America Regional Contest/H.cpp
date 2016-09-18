#include <bits/stdc++.h>

using namespace std;

int eval(vector<vector<int> > & DP, vector<int> const& arr,
          int form, int latt){
    if(DP[form][latt]!=-1) return DP[form][latt];
    int size=latt-form+1;
    if(size<=0) return -1;
    if(size==1) return DP[form][latt] = arr[form];
    if(size==2) return DP[form][latt] = abs(arr[form]-arr[latt]);
    int leftD,rightD;
    leftD=rightD=0;
    leftD+=arr[form];
    rightD+=arr[latt];
    leftD-=max(arr[form+1],arr[latt]);
    rightD-=max(arr[form],arr[latt-1]);
    if(arr[form+1]<arr[latt])
        leftD+=eval(DP,arr,form+1,latt-1);
    else
        leftD+=eval(DP,arr,form+2,latt);

    if(arr[form]<arr[latt-1])
        rightD+=eval(DP,arr,form,latt-2);
    else
        rightD+=eval(DP,arr,form+1,latt-1);

    return DP[form][latt] = max(leftD,rightD);
}

int main(){
    for(int game=1;;game++){
        int n;
        cin>>n;
        if(!n) break;
        vector<int> arr(n);
        for(int cnt=0;cnt<n;cnt++)
            scanf("%d",&arr[cnt]);
        vector<vector<int> > DP;
        DP.resize(n);
        for(int cnt=0;cnt<n;cnt++)
            DP[cnt].resize(n,-1);
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n",game,eval(DP,arr,0,n-1));
    }


    return 0;
}
