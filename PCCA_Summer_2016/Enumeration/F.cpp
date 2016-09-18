#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    return a?gcd(b%a,a):b;
}

int main(){
    int n;
    cin>>n;
    int divisor;
    int arr[n];
    cin>>divisor;
    arr[0]=divisor;
    for(int cnt=1;cnt<n;cnt++){
        int temp;
        scanf("%d",&temp);
        divisor = gcd(temp,divisor);
        arr[cnt]=temp;
    }
    int maxi=0;
    for(int cnt=0;cnt<n;cnt++)
        if(divisor%arr[cnt]==0)
            maxi=max(maxi,arr[cnt]);
    if(maxi==0)
        printf("-1\n");
    else
        printf("%d\n",maxi);
    return 0;
}
