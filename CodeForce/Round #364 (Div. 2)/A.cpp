#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > arr(n);
    for(int cnt=1;cnt<=n;cnt++){
        int temp;
        scanf("%d",&temp);
        arr[cnt-1] = pair<int,int>(temp,cnt);
    }
    sort(arr.begin(),arr.end());
    for(int sel=0;sel<n/2;sel++)
        printf("%d %d\n",arr[sel].second,arr[n-1-sel].second);
    return 0;
}
