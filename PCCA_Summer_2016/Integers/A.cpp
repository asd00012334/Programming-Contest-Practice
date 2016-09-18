#include <bits/stdc++.h>
#define MAX 1000000
#define ll long long
using namespace std;

bool prime[MAX+1];

int main(){
    prime[0] = prime[1] = false;
    for(ll cnt=2;cnt<=MAX;cnt++)
        prime[cnt] = true;
    for(ll cnt=2;cnt<=MAX;cnt++){
        if(prime[cnt]){
            for(ll tar=cnt*cnt;tar<=MAX;tar+=cnt){
                prime[tar] = false;
            }
        }
    }
    ll n;
    cin>>n;
    while(n--){
        bool yes=false;
        ll input;
        cin>>input;
        ll frac = sqrt(input);
        if(input==frac*frac)
        if(prime[frac])
            yes = true;
        if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
