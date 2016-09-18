#include <bits/stdc++.h>

using namespace std;

bool iscross(pair<int,int> l, pair<int,int> r){
    if(l.first<r.first&&r.first<l.second&&l.second<r.second)
        return true;
    if(r.first<l.first&&l.first<r.second&&r.second<l.second)
        return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    pair<int,int> lis[n-1];
    vector<int> dot(n);
    bool yes=false;
    for(int cnt=0;cnt<n;cnt++)
        scanf("%d",&dot[cnt]);
    for(int cnt=0;cnt<n-1;cnt++){
        lis[cnt].first=dot[cnt];
        lis[cnt].second=dot[cnt+1];
        if(lis[cnt].first>=lis[cnt].second)
            swap(lis[cnt].first,lis[cnt].second);
    }
    for(int form=0;form<n-2;form++)
    for(int latt=form+1;latt<n-1;latt++)
        if(iscross(lis[form],lis[latt])){
            yes=true;
            break;
        }
    if(yes) printf("yes\n");
    else printf("no\n");
    return 0;
}
