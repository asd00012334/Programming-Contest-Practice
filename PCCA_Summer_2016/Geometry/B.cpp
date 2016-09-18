#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr(4);
    for(int cnt=0;cnt<4;cnt++)
        cin>>arr[cnt];
    sort(arr.begin(),arr.end());
    bool tri = false;
    bool seg = false;
    for(int cnt=0;cnt<4;cnt++){
        vector<int> graph;
        for(int cnt2=0;cnt2<4;cnt2++)
            if(cnt2!=cnt)
                graph.push_back(arr[cnt2]);
        if(graph[0]+graph[1]>graph[2]){
            tri = true;
            break;
        }
        else if(graph[0]+graph[1]==graph[2])
            seg = true;
    }
    if(tri) printf("TRIANGLE\n");
    else if(seg) printf("SEGMENT\n");
    else printf("IMPOSSIBLE\n");
    return 0;
}
