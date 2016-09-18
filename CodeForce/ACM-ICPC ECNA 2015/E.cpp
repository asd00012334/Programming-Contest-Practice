#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m,s,t;
    cin>>n>>m>>s>>t;
    vector<vector<int> > mat(n,vector<int>(n,0));
    while(m--){
        int a,b;
        scanf("%d%d",&a,&b);
        mat[a][b]++;
        mat[b][a]++;
    }
    vector<ll> state(n,0);
    state[s] = 1;
    while(t--){
        vector<ll> newState(n,0);
        for(int r=0;r<n;r++){
            for(int cnt=0;cnt<n;cnt++)
                newState[r]+=mat[r][cnt]*state[cnt];
        }
        state=newState;
    }
    ll output=0;
    for(int cnt=0;cnt<n;cnt++)
        output+=state[cnt];
    printf("%I64d\n",output);

    return 0;
}
