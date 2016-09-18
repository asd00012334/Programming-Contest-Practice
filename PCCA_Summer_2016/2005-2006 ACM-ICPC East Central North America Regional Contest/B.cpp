#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,string> const& left, pair<int,string> const& right){
    return left.first>right.first||
    left.first==right.first&&left.second<right.second;
}

struct Node{
    int index;
    string name;
    vector<string> next;
    Node(int const& index, string const& name):
        index(index),name(name){}
};

int childNum(vector<Node> const& adjList, bool traversed[],
             int cur, int level, map<string,int> & indexOf){

    traversed[cur] = true;
    if(level==1) return adjList[cur].next.size();
    int output=0;
    for(int cnt=0;cnt<adjList[cur].next.size();cnt++){
        if(!indexOf.count(adjList[cur].next[cnt]))
            continue;
        int nextIndex = indexOf[adjList[cur].next[cnt]];
        if(!traversed[nextIndex]){
            output+=childNum(adjList,traversed,nextIndex,level-1,indexOf);
        }
    }
    return output;
}

int main(){
    int T;
    cin>>T;
    for(int time=1;time<=T;time++){
        int n,d;
        cin>>n>>d;
        while(getchar()!='\n');
        vector<Node> adjList;
        map<string,int> indexOf;
        for(int index=0;index<n;index++){
            string line;
            getline(cin,line);
            stringstream ss(line);
            ss>>line;
            indexOf[line] = index;
            int subNum;
            ss>>subNum;
            adjList.push_back(Node(index,line));
            while(subNum--){
                string subName;
                ss>>subName;
                adjList[index].next.push_back(subName);
            }
        }
        vector<pair<int,string> > ans(n);/**(decNum, index)**/
        for(int cnt=0;cnt<n;cnt++){
            bool traversed[n];
            memset(traversed,0,sizeof(traversed));
            ans[cnt]=pair<int,string>(childNum(adjList,traversed,cnt,d,indexOf),adjList[cnt].name);
        }
        sort(ans.begin(),ans.end(),cmp);
        printf("Tree %d:\n",time);
        if(ans.size()<=3){
            for(int cnt=0;cnt<ans.size();cnt++)
                printf("%s %d\n",ans[cnt].second.c_str(),ans[cnt].first);
        }
        else{
            int maxi = ans[2].first;
            for(int cnt=0;ans[cnt].first>=maxi&&ans[cnt].first>0&&cnt<ans.size();cnt++)
                printf("%s %d\n",ans[cnt].second.c_str(),ans[cnt].first);
        }
        printf("\n");
    }

    return 0;
}
