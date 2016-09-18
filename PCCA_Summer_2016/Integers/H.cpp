#include<bits/stdc++.h>

using namespace std;

template<typename type>
type gcd(type left, type right){
    type step=0;
    while(left){
        if(left>right) swap(left,right);
        else{
            step+=right/left;
            right%=left;
            swap(right,left);
        }
    }
    return step;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        printf("%d\n",gcd(a,b));
    }


    return 0;
}
