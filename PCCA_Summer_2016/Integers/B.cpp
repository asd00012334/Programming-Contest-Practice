#include <bits/stdc++.h>

using namespace std;

int main(){
    int last = 0;
    while(1){
        int temp = getchar();
        if(temp=='\n') break;
        last = last*10+(temp-'0');
        last%=100;
    }
    if(last%2) printf("0\n");
    else if(last%4==0) printf("4\n");
    else printf("0\n");

    return 0;
}
