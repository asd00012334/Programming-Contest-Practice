#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,k;
    cin>>n>>k;
    if(k==1){
        printf("%I64d\n",n);
        return 0;
    }
    ll arr[n];
    set<ll> con;
    for(int cnt=0;cnt<n;cnt++){
        scanf("%I64d",arr+cnt);
        con.insert(arr[cnt]);
    }
    sort(arr,arr+n);
    for(int cnt=0;cnt<n;cnt++)
        if(con.count(arr[cnt])&&con.count(arr[cnt]*k))
            con.erase(arr[cnt]*k);
    cout<<con.size()<<endl;
    return 0;
}
