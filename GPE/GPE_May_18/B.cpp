#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        int n;
        if(scanf("%d",&n)==EOF) break;
        int seq[n];
        for(int cnt=0;cnt<n;cnt++)
            scanf("%d",seq+cnt);
        int maxi=0;
        int LIS[n];
        for(int cnt=0;cnt<n;cnt++)
            LIS[cnt]=1;
        for(int cnt=0;cnt<n;cnt++){
            if(cnt==0) LIS[cnt]=1;
            else{
                for(int cnt2=0;cnt2<cnt;cnt2++){
                    if(seq[cnt2]<seq[cnt])
                        LIS[cnt]=max(LIS[cnt2]+1,LIS[cnt]);
                }
            }
        }
        for(int cnt=0;cnt<n;cnt++)
            maxi=max(maxi,LIS[cnt]);
        printf("%d\n",maxi);
    }
    return 0;
}
