#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int gcd;
    cin>>gcd;
    for(int cnt=1;cnt<n;cnt++){
        int temp;
        scanf("%d",&temp);
        gcd=__gcd(gcd,temp);
    }
    cout<<gcd*n<<endl;
    return 0;
}
