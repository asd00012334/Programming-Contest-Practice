#include <bits/stdc++.h>

using namespace std;

template<typename type>
type gcd(type a, type b){
    return a?gcd(b%a,a):b;
}

template<typename type>
bool prime(type input){
    if(input==1) return false;
    for(type cnt=2;cnt*cnt<=input;cnt++)
        if(!input%cnt)
            return false;
    return true;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        long long int a,b;
        scanf("%I64d%I64d",&a,&b);
        if(prime(gcd(a,b)))
            printf("Sim\n");
        else
            printf("Nao\n");
    }
}
