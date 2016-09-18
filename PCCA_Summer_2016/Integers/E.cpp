#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll a,b;
    ll step=0;
    cin>>a>>b;
    ll gcd = __gcd(a,b);
    a/=gcd;
    b/=gcd;
    while(!(a%2)||!(a%3)||!(a%5)){
        if(!(a%2)) a/=2,step++;
        if(!(a%3)) a/=3,step++;
        if(!(a%5)) a/=5,step++;
    }
    while(!(b%2)||!(b%3)||!(b%5)){
        if(!(b%2)) b/=2,step++;
        if(!(b%3)) b/=3,step++;
        if(!(b%5)) b/=5,step++;
    }
    if(a!=1||b!=1) printf("-1\n");
    else printf("%I64d\n",step);
    return 0;
}
