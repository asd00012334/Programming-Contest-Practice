#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,a,b,v;
    cin>>k>>a>>b>>v;
    int box=0;
    int section=k;
    while(a>0){
        if(section==k){
            section=1;
            box++;
            a-=v;
        }
        else if(b){
            section++;
            a-=v;
            b--;
        }
        else{
            box++;
            a-=v;
        }
    }
    printf("%d\n",box);
    return 0;
}
