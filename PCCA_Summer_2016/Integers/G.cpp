#include <bits/stdc++.h>
#define ld long double
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    ld exp=0;
    ld prev = 0;
    for(int cnt=1;cnt<=m;cnt++){
        ld temp = pow((ld)cnt/m,n);
        exp += (ld)(temp-prev)*cnt;
        prev = temp;
    }
    cout<<exp<<endl;
    return 0;
}
