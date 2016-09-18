#include <bits/stdc++.h>

using namespace std;

struct Person{
    int left;
    int right;
    bool male;
    Person(int left,int right, int male):
        left(left),right(right),male(male){}
};

int main(){
    int n;
    cin>>n;
    vector<Person> lis;
    set<int> traversed;
    for(int cnt=0;cnt<n;cnt++){
        while(getchar()!='\n');
        int left,right;
        bool male;
        if(getchar()=='M') male=true;
        else male=false;
        scanf("%d%d",&left,&right);
        lis.push_back(Person(left,right,male));
        traversed.insert(left);
        traversed.insert(right);
    }
    int maxi=0;
    set<int>::iterator i = traversed.begin();
    set<int>::iterator end = traversed.end();
    for(;i!=end;++i){
        int male=0;
        int female=0;
        for(int cnt=0;cnt<lis.size();cnt++)
            if(lis[cnt].left<=*i&&*i<=lis[cnt].right){
                if(lis[cnt].male) male++;
                else female++;
            }
        maxi=max(maxi,2*min(male,female));
    }
    printf("%d\n",maxi);
    return 0;
}
