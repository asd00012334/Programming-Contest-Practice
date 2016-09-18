#include <bits/stdc++.h>
#define MAX 1000000
#define ll long long
#define INF (1<<(sizeof(int)*8-2))
using namespace std;

bool prime[MAX+1];

int main(){
    vector<ll> primeArr;
    prime[0] = prime[1] = false;
    for(ll cnt=2;cnt<=MAX;cnt++)
        prime[cnt] = true;
    for(ll cnt=2;cnt<=MAX;cnt++)
        if(prime[cnt]){
            for(ll tar=cnt*cnt;tar<=MAX;tar+=cnt)
                prime[tar] = false;
            primeArr.push_back(cnt);
        }
    ll n,m;
    cin>>n>>m;
    ll primeRow[n];
    ll primeCol[m];
    memset(primeRow,0,sizeof(primeRow));
    memset(primeCol,0,sizeof(primeCol));
    for(int row=0;row<n;row++)
    for(int col=0;col<m;col++){
        ll temp;
        scanf("%I64d",&temp);
        temp=*lower_bound(primeArr.begin(),primeArr.end(),temp)-temp;
        primeRow[row]+=temp;
        primeCol[col]+=temp;
    }
    ll mini = INF;
    for(int row=0;row<n;row++)
        mini = min(mini,primeRow[row]);
    for(int col=0;col<m;col++)
        mini = min(mini,primeCol[col]);
    if(mini!=INF)
        printf("%I64d\n",mini);
    else
        printf("0\n");
    return 0;
}
