#include <bits/stdc++.h>

using namespace std;

int arr[20000];

int bigLen[20000];

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        scanf("%d",&n);

        int maxi=0;
        for(int cnt=0;cnt<n;cnt++){
            scanf("%d",arr+cnt);
            maxi=max(maxi,arr[cnt]);
        }

        maxi=0;
        memset(bigLen,0,sizeof(bigLen));
        for(int cnt=0;cnt<n;cnt++){
            bigLen[arr[cnt]]=max(bigLen[arr[cnt]],
                                 bigLen[arr[cnt]-1]+1);
            maxi = max(maxi,bigLen[arr[cnt]]);
        }
        printf("%d\n",maxi);
    }
    return 0;
}
