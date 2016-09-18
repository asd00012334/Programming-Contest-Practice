#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool firstWin = false;
    while(n--){
        int temp;
        scanf("%d",&temp);
        temp--;
        if(temp%2) firstWin = !firstWin;
        if(firstWin) cout<<1<<endl;
        else cout<<2<<endl;
    }


    return 0;
}
