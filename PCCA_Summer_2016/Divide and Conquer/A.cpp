#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(pair<ll,ll> const& left, pair<ll,ll> const& right){
    return left.first<right.first;
}

int main(){
    ll n,d;
    cin>>n>>d;
    pair<ll,ll> arr[n+1];
    for(ll cnt=1;cnt<=n;cnt++)
        cin>>arr[cnt].first>>arr[cnt].second;
    sort(arr+1,arr+n+1);
    ll prefix[n+1];
    prefix[0]=0;
    for(ll cnt=1;cnt<=n;cnt++)
        prefix[cnt]=prefix[cnt-1]+arr[cnt].second;
    ll maxi=0;
    for(ll form=1;form<=n;form++){
        pair<ll,ll> temp = pair<ll,ll>(arr[form].first+d-1,arr[form].second);
        ll latt = upper_bound(arr+form,arr+n+1,temp,cmp) - arr;
        ll cur = prefix[latt-1]-prefix[form-1];
        maxi = max(maxi,cur);
    }
    cout << maxi << endl;
    return 0;
}
