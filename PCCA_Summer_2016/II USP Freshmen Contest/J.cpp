#include <bits/stdc++.h>

using namespace std;

struct Circle{
    int x;
    int y;
    int r;
    Circle(){}
    Circle(int x, int y, int r):
        x(x),y(y),r(r){}
    friend bool collision(Circle left, Circle right){
        int dx,dy,dr;
        dx=abs(left.x-right.x);
        dy=abs(left.y-right.y);
        dr=left.r+right.r;
        return dx*dx+dy*dy<=dr*dr;
    }
};

int main(){
    int T;
    cin>>T;
    Circle l[T];
    for(int cnt=0;cnt<T;cnt++){
        int x,y,r;
        cin>>x>>y>>r;
        l[cnt] = Circle(x,y,r);
    }
    vector<pair<int,int> > ans;
    for(int form=0;form<T;form++)
    for(int latt=form+1;latt<T;latt++)
        if(collision(l[form],l[latt]))
            ans.push_back(pair<int,int>(form,latt));
    for(int cnt=0;cnt<ans.size();cnt++)
        printf("%d %d\n",ans[cnt].first+1,ans[cnt].second+1);
    return 0;
}
