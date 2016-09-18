#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[2][2];
    cin>>a[0][0]>>a[0][1]>>a[1][0]>>a[1][1];
    int n = ceil(sqrt((a[0][0]+a[0][1]+a[1][0]+a[1][1])*2));
    int zero = ceil(sqrt(a[0][0]*2));
    int one = ceil(sqrt(a[1][1]*2));
    if(zero*one!=a[0][1]+a[1][0])
        cout<<"Impossible"<<endl;
    else{
        int ONE=1,ZERO=0;
        if(zero==0&&one){
            swap(one,zero);
            swap(ONE,ZERO);
        }
        else if(zero==0){
            printf("\n");
            return 0;
        }
        int prefixOne = a[1][0]/zero;
        int suffixOne = a[0][1]/zero;
        int midd = a[0][1]%zero;
        int middLast = one-prefixOne-suffixOne;
        for(int cnt=0;cnt<prefixOne;cnt++)
            printf("%d",ONE);
        for(int cnt=0;cnt<midd;cnt++)
            printf("%d",ZERO);
        for(int cnt=0;cnt<middLast;cnt++)
            printf("%d",ONE);
        for(int cnt=midd;cnt<zero;cnt++)
            printf("%d",ZERO);
        for(int cnt=0;cnt<suffixOne;cnt++)
            printf("%d",ONE);
        printf("\n");

    }
    return 0;
}
