#include <bits/stdc++.h>

using namespace std;

int r[2],c[2],d[2];

bool isvalid(int a[2][2]){
    return
    a[0][0]+a[0][1]==r[0]&&
    a[0][0]+a[1][0]==c[0]&&
    a[1][0]+a[1][1]==r[1]&&
    a[0][1]+a[1][1]==c[1]&&
    a[0][0]+a[1][1]==d[0]&&
    a[1][0]+a[0][1]==d[1];

}

int main(){
    int ans[2][2];
    memset(ans,0,sizeof(ans));
    cin>>r[0]>>r[1]>>c[0]>>c[1]>>d[0]>>d[1];
    bool existValid=false;
    for(int a=1;a<=9;a++)
    for(int b=1;b<=9;b++)
    for(int c=1;c<=9;c++)
    for(int d=1;d<=9;d++){
        if(!(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)) continue;
        int ans[2][2]=
        {{a,b},
         {c,d}};
        if(isvalid(ans)&&!existValid){
            existValid=true;
            printf("%d %d\n%d %d\n",ans[0][0],ans[0][1],ans[1][0],ans[1][1]);
        }
    }
    if(!existValid)
        printf("-1\n");
    return 0;
}
