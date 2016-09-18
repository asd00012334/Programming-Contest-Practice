#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,T;
    cin>>n>>T;
    vector<int> food(n);
    for(int cnt=0;cnt<n;cnt++)
        scanf("%d",&food[cnt]);
    vector<int>::iterator i;
    int YanVar=0;
    int NatVar=0;
    for(i=food.begin();YanVar<=T&&i!=food.end();++i)
        YanVar+=*i;
    YanVar=i-food.begin();
    vector<int>::reverse_iterator I;
    for(I=food.rbegin();NatVar<=T&&I!=food.rend();++I)
        NatVar+=*I;
    NatVar=I-food.rbegin();
    if(YanVar<NatVar)
        printf("Nathan\n");
    else if(NatVar<YanVar)
        printf("Yan\n");
    else
        printf("Empate\n");
    return 0;
}
