#include <bits/stdc++.h>

using namespace std;

bool valid(vector<int> const& p, int x){
    return x==(x%p[0]%p[1]%p[2]%p[3]);
}

int main(){
    vector<int> p(4);
    int a,b;
    cin>>p[0]>>p[1]>>p[2]>>p[3];
    cin>>a>>b;
    sort(p.begin(),p.end());
    int validNum = 0;
    for(int x=a;x<=b;x++){
        int cnt=0;
        for(int cnt2=0;cnt2<24;cnt2++){
            if(valid(p,x))
                cnt++;
            next_permutation(p.begin(),p.end());
        }
        if(cnt>=7) validNum++;
    }
    printf("%d\n",validNum);
    return 0;
}
