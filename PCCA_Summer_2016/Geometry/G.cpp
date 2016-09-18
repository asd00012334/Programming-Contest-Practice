#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a,x,y;
    cin>>a>>x>>y;
    if(0<y&&y<a){
        if(abs(x)*2<a)
            printf("1\n");
        else
            printf("-1\n");
    }
    else if(y>a){
        y-=a;
        ll level = y/(2*a);
        ll modu = y-level*2*a;
        if(modu==0) printf("-1\n");
        else if(modu<a && 2*abs(x)<a ){
            printf("%I64d\n",level*3+2);
        }
        else if(modu>a&&abs(x)<a){
            if(x>0) printf("%I64d\n",level*3+4);
            else if(x<0) printf("%I64d\n",level*3+3);
            else printf("-1\n");
        }
        else printf("-1\n");
    }
    else printf("-1\n");
    return 0;
}
