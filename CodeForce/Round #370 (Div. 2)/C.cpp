#include <bits/stdc++.h>
#define INF (1<<(sizeof(int)*8-1)-1)

using namespace std;

int step(basic_string<int> tri){
    static map<basic_string<int>,int > ans;
    if(ans.count(tri)) return ans[tri];
    if(tri[0]==tri.back()&&tri[2]==tri.back()) return ans[tri] = 0;
    if(tri[0]+tri[1]<=tri[2]) return ans[tri] =INF;
    int output =INF;
    int top = tri[2];
    for(int i=tri[1]-tri[0]+1;i<top-1;i++){
        basic_string<int> next(tri);
        next[2] = i;
        sort(next.begin(),next.begin()+3);
        output = min(output,step(next)+1);
    }
    tri[2] = top;
    return ans[tri]=output;
}

int main(){
    int x,y;
    cin>>x>>y;
    basic_string<int> p(3,x);
    p.push_back(y);
    cout<<step(p)<<endl;
    return 0;
}
