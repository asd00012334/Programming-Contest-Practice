#include <bits/stdc++.h>
#define MAX 1000010
#define ll long long
using namespace std;

bool sieve[MAX+1] = {};

vector<ll> prime;
void build(){
    sieve[0]=sieve[1]=true;
    for(ll cnt=2;cnt<=MAX;cnt++){
        if(!sieve[cnt]){
            prime.push_back(cnt);
            for(ll cnt2=cnt*cnt;cnt2<=MAX;cnt2+=cnt)
                sieve[cnt2] = true;
        }
    }
}

bool isprime(ll input){
    if(input<=MAX) return !sieve[input];
    for(ll cnt=0;cnt<prime.size();cnt++)
        if(!(input%prime[cnt]))
            return false;
    return true;
}

using namespace std;



int main(){
    build();
    ll n;
    ll total=0;
    cin>>n;
    while(1){
        total+=n;
        if(n==1) break;
        if(isprime(n)){
            n=1;
            continue;
        }
        for(ll cnt=0;cnt<prime.size();cnt++){
            if(!(n%prime[cnt])){
                n/=prime[cnt];
                break;
            }
        }
    }
    printf("%I64d\n",total);
    return 0;
}
