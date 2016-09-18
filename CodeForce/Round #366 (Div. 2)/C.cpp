#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> type3Max(q+1,0);
    vector<int> type2Accum(q+1,0);
    vector<int> type1Accum(q+1,0);
    vector<pair<int,int> > cmd(q+1);///(type par)
    for(int cnt=1;cnt<=q;cnt++){
        int type,par;
        scanf("%d%d",&type,&par);
        type3Max[cnt] = type3Max[cnt-1];
        type2Accum[cnt] = type2Accum[cnt-1];
        type1Accum[cnt] = type1Accum[cnt-1];
        if(type==3)
            type3Max[cnt] = max(type3Max[cnt],par);
        else if(type==2)
            type2Accum[cnt]++;
        else if(type==1)
            type1Accum[cnt]++;
        cmd[cnt]=pair<int,int>(type,par);
    }
    vector<int> arr(q+1,0);
    vector<int> mailBox(n+1,0);
    int unread = 0;
    for(int cnt=1;cnt<=q;cnt++){
        int type,par;
        type = cmd[cnt].first;
        par = cmd[cnt].second;
        if(type==1){
            mailBox[par]++;
            unread++;
        }
        else if(type==2){
            unread-=mailBox[par];
            mailBox[par] = 0;
        }
        arr[cnt] = unread;
    }
    for(int cnt=1;cnt<=q;cnt++){
        int output;
        int lower = upper_bound(type1Accum.begin(),type1Accum.end(),type3Max[cnt])-type1Accum.begin();
        output = arr[cnt] - arr[lower-1];
        printf("%d\n",output);
    }
    return 0;
}
