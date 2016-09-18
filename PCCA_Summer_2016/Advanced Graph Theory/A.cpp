#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int dir[4];
    while(getchar()!='\n');
    string line;
    getline(cin,line);
    dir[0] = line[0];
    dir[2] = line[line.size()-1];
    getline(cin,line);
    dir[3] = line[0];
    dir[1] = line[line.size()-1];
    if(dir[0]=='>'&&
       dir[1]=='v'&&
       dir[2]=='<'&&
       dir[3]=='^'||
       dir[0]=='<'&&
       dir[1]=='^'&&
       dir[2]=='>'&&
       dir[3]=='v')
       printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
