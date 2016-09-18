#include <bits/stdc++.h>
#define ld long double
#define INF (1E9)
using namespace std;

int main(){
    int n,vb,vs;
    cin>>n>>vb>>vs;
    vector<int> arr(n);
    int x,y;
    for(int cnt=0;cnt<n;cnt++)
        cin>>arr[cnt];
    cin>>x>>y;
    int ans=-1;
    ld ansValue = INF;
    for(int cnt=1;cnt<n;cnt++){
        ld time = 0;
        time += (ld)abs(arr[cnt]-arr[0])/vb;
        time += sqrtl(powl(x-arr[cnt],2)+powl(y,2))/vs;
        if(time<ansValue){
            ans = cnt;
            ansValue = time;
        }
        else if(time==ansValue){
            if(abs(arr[cnt]-arr[0])>abs(arr[ans]-arr[0])){
                ans = cnt;
                ansValue = time;
            }
        }
    }
    printf("%d\n",ans+1);
}
