#include <bits/stdc++.h>
#define ld long double
using namespace std;

int main(){
    int n,R,r;
    cin>>n>>R>>r;
    ld total = acosl(0)*4;
    if(R==r){
        if(n<=1) printf("YES\n");
        else printf("NO\n");
        return 0;
    }
    else if(R<r){
        if(n<=0) printf("YES\n");
        else printf("NO\n");
        return 0;
    }
    else if(2*r>R){
        if(n<=1) printf("YES\n");
        else printf("NO\n");
        return 0;
    }
    else if(2*r==R){
        if(n<=2) printf("YES\n");
        else printf("NO\n");
        return 0;
    }
    ld sita = asinl((ld)r/(R-r))*2;
    if(total>=sita*n) printf("YES\n");
    else printf("NO\n");
    return 0;
}
