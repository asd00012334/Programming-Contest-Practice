#include <bits/stdc++.h>

using namespace std;

template<typename type>
type gcd(type left, type right){
    return left?gcd(right%left,left):right;
}

template<typename type>
type lcm(type left, type right){
    if(!left&&!right) return 0;
    return left*right/gcd(left,right);
}

struct Quotient{
    int up;
    int down;
    Quotient(int up, int down):
        up(up), down(down){}
    friend bool operator<(Quotient left, Quotient right){
        int down = lcm(left.down,right.down);
        return down/left.down*left.up<down/right.down*right.up;
    }
    friend bool operator>(Quotient left, Quotient right){
        int down = lcm(left.down,right.down);
        return down/left.down*left.up>down/right.down*right.up;
    }
    friend bool operator==(Quotient left, Quotient right){
        int down = lcm(left.down,right.down);
        return down/left.down*left.up==down/right.down*right.up;
    }
};

int main(){
    int n,m,k;
    int left;
    cin>>n>>m>>k;
    left = n-m;
    int ans[2];
    for(ans[0]=0;Quotient(ans[0]+k,n)<Quotient(7,10);ans[0]++);
    ans[1]=(left+k)*100/n;
    if(ans[0]+m>n) ans[0]=-1;
    printf("%d\n%d\n",ans[0],ans[1]);
    return 0;
}
