#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    ll a,b;
    cin>>n>>a>>b;
    vector<pair<ll,ll> > arr;
    for(int cnt=0;cnt<n;cnt++){
        ll k,c;
        scanf("%I64d%I64d",&k,&c);
        arr.push_back(pair<ll,ll>(a*k+c,b*k+c));
    }
    sort(arr.begin(),arr.end());
    pair<ll,ll> prev = arr[0];
    bool yes = false;
    for(int cnt=1;cnt<arr.size();cnt++){
        if(prev.second>arr[cnt].second){
            yes = true;
            break;
        }
        prev = arr[cnt];
    }
    if(yes) printf("YES\n");
    else printf("NO\n");
}
