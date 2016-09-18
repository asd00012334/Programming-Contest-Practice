#include <bits/stdc++.h>
#define mod 1000000007LL

using namespace std;

template<typename type>
bool isgood(type input, type const& a, type const& b){
    while(input){
        type temp=input%10;
        if(temp!=a&&temp!=b) return false;
        input/=10;
    }
    return true;
}

template<typename type>
pair<type,type> extGCD(type left, type right){
    pair<type,type> lCor(1,0), rCor(0,1);
    while(left){
        swap(left,right);
        swap(lCor,rCor);
        lCor.first -= left/right*rCor.first;
        lCor.second -=left/right*rCor.second;
        left%=right;
    }
    return rCor;
}


int main(){
    long long int a,b,n,ans=0;
    scanf("%I64d%I64d%I64d",&a,&b,&n);
    long long int Compo = 1;
    for(long long int k=0;k<=n;k++){
        if(k) Compo=Compo*(n+1-k)%mod*((extGCD(k,mod).first%mod+mod)%mod)%mod;
        if(isgood(k*a+(n-k)*b,a,b))
            ans=(ans+Compo)%mod;
    }
    printf("%I64d\n",ans);
    return 0;
}
