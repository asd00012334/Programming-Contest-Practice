#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int digit[10];
    memset(digit,0,sizeof(digit));
    for(int cnt=0;cnt<n;cnt++){
        int temp;
        scanf("%d",&temp);
        digit[temp]++;
    }
    int sum=0;
    for(int cnt=0;cnt<10;cnt++)
        sum+=cnt*digit[cnt];
    sum%=3;
    while(1){
        if(sum%3==1){
            int order[6] = {1,4,7,2,5,8};
            bool access=false;
            for(int cnt=0;cnt<6;cnt++){
                if(digit[order[cnt]]){
                    digit[order[cnt]]--;
                    sum = (sum+9-order[cnt])%3;
                    access = true;
                    break;
                }
            }
            if(!access) break;
        }
        else if(sum%3==2){
            int order[6] = {2,5,8,1,4,7};
            bool access=false;
            for(int cnt=0;cnt<6;cnt++){
                if(digit[order[cnt]]){
                    digit[order[cnt]]--;
                    sum = (sum+9-order[cnt])%3;
                    access = true;
                    break;
                }
            }
            if(!access) break;
        }
        else break;
    }
    if(sum%3||!digit[0])
        printf("-1\n");
    else{
        bool access=false;
        for(int cnt=9;cnt>0;cnt--)
            for(int cnt2=1;cnt2<=digit[cnt];cnt2++){
                printf("%d",cnt);
                access=true;
            }
        int zero;
        if(access) zero=digit[0];
        else zero=1;
        for(int cnt=1;cnt<=zero;cnt++)
            printf("0");
        printf("\n");
    }
    return 0;
}
