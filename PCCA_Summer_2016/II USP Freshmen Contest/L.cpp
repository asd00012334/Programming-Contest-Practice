#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int h[N];
    for(int cnt=0;cnt<N;cnt++)
        scanf("%d",h+cnt);
    pair<int,int> maxi(0,0);
    maxi.first=0;
    maxi.second=1;
    for(int cnt=1;cnt<N;cnt++)
        if(h[maxi.first]<h[cnt]){
            maxi.first=cnt;
            maxi.second=1;
        }
        else if(h[maxi.first]==h[cnt])
            maxi.second++;
    if(maxi.second>1)
        printf("-1\n");
    else
        printf("%d\n",maxi.first+1);
    return 0;
}
