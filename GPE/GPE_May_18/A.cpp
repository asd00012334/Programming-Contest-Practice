#include <bits/stdc++.h>

using namespace std;


bool issub(string const& small,string const& big){
    int siz_s,siz_b;
    siz_s=small.size();
    siz_b=big.size();
    if(siz_s>siz_b) return false;
    int left=0,right=0;
    while(left<siz_s&&right<siz_b){
        if(small[left]==big[right]) left++,right++;
        else right++;
    }
    if(left==siz_s) return true;
    else return false;
}

int main(){
    while(1){
        string a,b;
        if(!(cin>>a>>b)) break;
        if(issub(a,b)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
