#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        scanf("%d%d",&a,&b);
        if((a%2)*(b%2)%2==0)
            printf("Hasan\n");
        else
            printf("Hussain\n");
    }
    return 0;
}
