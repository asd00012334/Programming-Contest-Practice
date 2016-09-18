#include <bits/stdc++.h>

using namespace std;
/**  3 2 5 **/
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int counting[k+1];
    memset(counting,0,sizeof(counting));
    for(int cnt=0;cnt<n;cnt++){
        scanf("%d",arr+cnt);
        if(cnt&&arr[cnt]==arr[cnt-1]){
            cnt--;
            n--;
        }
    }
    for(int cnt=0;cnt<n;cnt++){
        if(cnt==0){
            if(arr[cnt]!=arr[cnt+1])
                counting[arr[cnt]]++;
        }else if(cnt==n-1){
            if(arr[cnt]!=arr[cnt-1])
                counting[arr[cnt]]++;
        }else{
            if(arr[cnt]!=arr[cnt-1] && arr[cnt]!=arr[cnt+1]){
                if(arr[cnt-1]!=arr[cnt+1])
                    counting[arr[cnt]]++;
                else
                    counting[arr[cnt]]+=2;
            }
        }
    }
    int ans=1;
    for(int cnt=1;cnt<=k;cnt++){
        if(counting[cnt]>counting[ans])
            ans=cnt;
    }
    printf("%d\n",ans);
    return 0;
}
