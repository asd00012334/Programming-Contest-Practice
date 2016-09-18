#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,b,d;
    cin>>n>>b>>d;
    int buck = 0;
    int clean = 0;
    for(int cnt=0;cnt<n;cnt++){
        int a;
        scanf("%d",&a);
        if(a>b) continue;
        else{
            buck+=a;
            if(buck>d) clean++,buck=0;
        }
    }
    cout<<clean<<endl;
    return 0;
}
