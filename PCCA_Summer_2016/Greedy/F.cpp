#include <bits/stdc++.h>

using namespace std;

int main(){
    string top,bot;
    cin>>top>>bot;
    sort(bot.begin(),bot.end());
    int topPos=0;
    for(int cnt=bot.size()-1;cnt>=0;cnt--){
        for(;topPos<top.size();topPos++){
            if(bot[cnt]>top[topPos]){
                swap(bot[cnt],top[topPos]);
                break;
            }
        }
    }
    cout<<top<<endl;
    return 0;
}
