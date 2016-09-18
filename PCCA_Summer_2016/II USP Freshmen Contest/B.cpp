#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int cnt=0;cnt<n;cnt++)
        scanf("%d",a+cnt);
    int ans;
    for(ans=1;(1<<ans)<=n;ans++);
    printf("%d\n",ans);
    return 0;
}
