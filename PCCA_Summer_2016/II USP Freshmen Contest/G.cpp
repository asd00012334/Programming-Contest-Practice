#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> stak;
    while(1){
        int temp = getchar();
        if(temp=='\n'||temp==EOF) break;
        if(stak.empty()) stak.push_back(temp);
        else if(stak.back()=='A'&&temp=='B') stak.pop_back();
        else stak.push_back(temp);
    }
    if(stak.empty())
        printf("Sim\n");
    else
        printf("Nao\n");
    return 0;
}
