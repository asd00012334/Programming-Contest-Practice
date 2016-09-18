#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a[3];
    long long int d;
    for(int cnt=0;cnt<3;cnt++)
        cin>>a[cnt];
    d=sqrt(a[0]*a[1]*a[2]);
    long long int b[3];
    for(int cnt=0;cnt<3;cnt++)
        b[cnt]=d/a[cnt];
    cout<<4*(b[0]+b[1]+b[2])<<endl;
    return 0;
}
