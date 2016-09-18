#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        scanf("%d",&n);
        bool mapp[101][101];
        memset(mapp,0,sizeof(mapp));
        for(int cnt=0;cnt<n;cnt++){
            int i,j,k;
            scanf("%d%d%d",&i,&j,&k);
            for(int row=i;row<j;row++)
            for(int col=0;col<k;col++)
                mapp[row][col]=true;
        }
        int ans=0;
        for(int row=0;row<100;row++)
        for(int col=0;col<100;col++)
            if(mapp[row][col])
                ans++;
        printf("%d\n",ans);
    }

    return 0;
}
