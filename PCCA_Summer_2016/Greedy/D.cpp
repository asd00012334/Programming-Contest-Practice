#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,cur;
    cin>>n>>cur;
    cur--;
    string str;
    cin>>str;
    if(abs(cur)<abs(n-1-cur)){
        for(;cur>0;cur--)
            printf("LEFT\n");
        for(;cur<n-1;cur++)
            printf("PRINT %c\nRIGHT\n",str[cur]);
        printf("PRINT %c\n",str[cur]);
    }
    else{
        for(;cur<n-1;cur++)
            printf("RIGHT\n");
        for(;cur>0;cur--)
            printf("PRINT %c\nLEFT\n",str[cur]);
        printf("PRINT %c\n",str[cur]);
    }
    return 0;
}
