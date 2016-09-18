#include <bits/stdc++.h>
#define ld long double
using namespace std;

int main(){
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> arr(m+1);
    for(int cnt=1;cnt<=m;cnt++){
        int temp;
        scanf("%d",&temp);
        arr[cnt] = temp;
    }
    arr[h]--;
    int b,d;
    b=d=0;
    ld prob = 1;
    b = arr[h];
    for(int cnt=1;cnt<=m;cnt++)
        if(cnt==h) continue;
        else d+=arr[cnt];
    if((d+b+1)<n){
        printf("-1\n");
        return 0;
    }
    for(int guy=1;guy<n;guy++){
        if(d){
            prob*=(ld)d/(d+b);
            d--;
        }
        else{
            prob = 0;
            break;
        }
    }
    prob = (ld)1-prob;
    cout<<prob<<endl;
    return 0;
}
