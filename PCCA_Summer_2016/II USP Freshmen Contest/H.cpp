#include <bits/stdc++.h>

using namespace std;

int main(){
    int D;
    cin>>D;
    vector<int> floor(D), foot(D), chain(D);
    for(int cnt=0;cnt<D;cnt++)
        scanf("%d",&floor[cnt]);
    for(int cnt=0;cnt<D;cnt++)
        scanf("%d",&foot[cnt]);
    for(int cnt=0;cnt<D;cnt++)
        scanf("%d",&chain[cnt]);
    long long int yan, mar;
    yan=mar=0;
    for(int cnt=0;cnt<D;cnt++){
        long long int temp=floor[cnt]-foot[cnt];
        yan+=temp*temp;
    }
    for(int cnt=0;cnt<D;cnt++){
        long long int temp=floor[cnt]-chain[cnt];
        mar+=temp*temp;
    }
    if(yan<=mar) printf("Yan\n");
    else printf("MaratonIME\n");
    return 0;
}
