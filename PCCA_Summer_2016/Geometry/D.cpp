#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    ll sum = 0;
    int arr[n];
    for(int cnt=0;cnt<n;cnt++){
        scanf("%d",arr+cnt);
        sum+=arr[cnt];
    }
    sort(arr,arr+n);
    sum-=2*arr[n-1];
    printf("%I64d\n",abs(sum)+1);
    return 0;
}
