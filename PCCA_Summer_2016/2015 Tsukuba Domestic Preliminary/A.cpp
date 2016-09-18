#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        int m,nMin,nMax;
        scanf("%d%d%d",&m,&nMin,&nMax);
        if(!m&&!nMin&&!nMax) break;
        nMin=max(nMin,0);
        nMax=min(m,nMax);
        int arr[m+1];
        arr[0]=0;
        for(int cnt=1;cnt<=m;cnt++)
            scanf("%d",arr+cnt);
        sort(arr+1,arr+m+1);
        int maxi=0;
        int maxiSuc=0;
        for(int n=nMin;n<=nMax;n++){
            int temp=arr[m-n+1]-arr[m-n];
            if(temp>=maxi){
                maxi=temp;
                maxiSuc=n;
            }
        }
        printf("%d\n",maxiSuc);
    }
    return 0;
}
