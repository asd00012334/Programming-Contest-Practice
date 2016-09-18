#include <bits/stdc++.h>

using namespace std;

bool operator<(pair<int,int> l, pair<int,int> r){
    return l.first<r.first;
}

int main(){
    map<int,int> fruit;///(day,amount)
    int n,v;
    cin>>n>>v;
    for(int cnt=0;cnt<n;cnt++){
        int temp1,temp2;
        scanf("%d%d",&temp1,&temp2);
        if(!fruit.count(temp1))
            fruit[temp1]=temp2;
        else
            fruit[temp1]+=temp2;
    }
    int ans=0;
    int last = fruit.rbegin()->first+1;
    for(int cnt=1;cnt<=last;cnt++){
        int tempV=v;
        if(fruit.count(cnt-1)){
            int temp=min(fruit[cnt-1],tempV);
            fruit[cnt-1]-=temp;
            ans+=temp;
            tempV-=temp;
        }
        if(fruit.count(cnt)){
            int temp=min(fruit[cnt],tempV);
            fruit[cnt]-=temp;
            ans+=temp;
            tempV-=temp;
        }
    }
    printf("%d\n",ans);
    return 0;
}
