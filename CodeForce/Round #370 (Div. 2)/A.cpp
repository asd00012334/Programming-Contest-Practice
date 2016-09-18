#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n+1);
    arr[n]=0;
    for(int cnt=0;cnt<n;cnt++)
        scanf("%d",&arr[cnt]);
    for(int cnt=0;cnt<n;cnt++){
        if(cnt) printf(" ");
        printf("%d",arr[cnt]+arr[cnt+1]);
    }
    printf("\n");
    return 0;
}
