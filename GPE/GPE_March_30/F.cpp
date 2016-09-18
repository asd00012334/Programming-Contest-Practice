#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

long long int mpow(long long int base,long long int expo);

int main(){
    while(1){
        long long int n;
        if(scanf("%lld",&n)==EOF)
            break;
        long long int output=(mpow(3,n)+1000000007L)%1000000009L;
        printf("%lld\n",output);
    }
    return 0;
}

long long int mpow(long long int base,long long int expo){
    if(expo==0)
        return 1;
    else if(expo==1)
        return base%1000000009L;
    else if(expo%2==0){
       long long int temp=mpow(base,expo/2);
        return temp%1000000009L*temp%1000000009L;
    }
    else if(expo%2==1){
        long long int temp=mpow(base,expo/2);
        return temp%1000000009L*temp%1000000009L*base%1000000009L;
    }
}
