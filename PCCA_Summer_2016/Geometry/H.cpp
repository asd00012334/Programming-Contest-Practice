#include <bits/stdc++.h>

using namespace std;

int main(){
    int x[2],y[2],z[2];
    int sum=0;
    cin>>x[0]>>y[0]>>z[0];
    cin>>x[1]>>y[1]>>z[1];
    vector<int> arr(6);
    for(int cnt=0;cnt<6;cnt++)
        cin>>arr[cnt];
    if(x[0]>x[1]) sum+=arr[5];
    if(x[0]<0) sum+=arr[4];
    if(y[0]>y[1]) sum+=arr[1];
    if(y[0]<0) sum+=arr[0];
    if(z[0]>z[1]) sum+=arr[3];
    if(z[0]<0) sum+=arr[2];
    printf("%d\n",sum);
    return 0;
}
