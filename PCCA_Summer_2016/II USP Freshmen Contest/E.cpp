#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1];
    a[0]=0;
    for(int cnt=1;cnt<=n;cnt++){
        int temp;
        scanf("%d",&temp);
        a[cnt]=a[cnt-1]+temp;
    }
    while(m--){
        int form,latt;
        scanf("%d%d",&form,&latt);
        if((a[latt]-a[form-1])%2==0)
            printf("Sim\n");
        else
            printf("Nao\n");

    }
    return 0;
}
