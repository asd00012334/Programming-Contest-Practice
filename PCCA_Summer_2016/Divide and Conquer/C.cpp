#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    ll arr[n];
    ll query[n];
    memset(arr,0,sizeof(arr));
    memset(query,0,sizeof(query));
    for(int cnt=0;cnt<n;cnt++)
        scanf("%I64d",arr+cnt);
    for(int cnt=0;cnt<q;cnt++){
        int left, right;
        scanf("%d%d",&left,&right);
        left--;
        right--;
        query[left]++;
        if(right<n-1)
            query[right+1]--;
    }

    for(int cnt=1;cnt<n;cnt++)
        query[cnt] += query[cnt-1];
    sort(query,query+n);
    sort(arr,arr+n);

    ll ans = 0;
    for(int cnt=0;cnt<n;cnt++)
        ans+=query[cnt]*arr[cnt];
    printf("%I64d\n",ans);
    return 0;
}
