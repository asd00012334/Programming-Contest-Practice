#include <bits/stdc++.h>
#define ld long double
using namespace std;

int main(){
    int n,k;
    ld sum=0;
    cin>>n>>k;
    pair<int,int> point;
    cin>>point.first>>point.second;
    for(int cnt=2;cnt<=n;cnt++){
        pair<int,int> pt,temp;
        cin>>pt.first>>pt.second;
        temp=pt;
        pt.first-=point.first;
        pt.second-=point.second;
        point=temp;
        sum+=sqrt(pt.first*pt.first+pt.second*pt.second);
    }
    sum = sum/50*k;
    cout<<setprecision(9);
    cout<<sum<<endl;
    return 0;
}
