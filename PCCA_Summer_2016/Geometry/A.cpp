#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll> > pt;
    for(int cnt=0;cnt<=n;cnt++){
        pair<ll,ll> temp;
        scanf("%I64d%I64d",&temp.first, &temp.second);
        if(cnt){
            temp.first-=pt[0].first;
            temp.second-=pt[0].second;
        }
        bool ins = true;
        for(int prev=1;prev<pt.size();prev++)
            if(temp.first*pt[prev].second==temp.second*pt[prev].first){
                ins = false;
                break;
            }
        if(ins) pt.push_back(temp);
    }
    printf("%d\n",pt.size()-1);
    return 0;
}
