#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int dir[4] ={0};
    if(str.size()%2){
        printf("-1\n");
        return 0;
    }
    for(int cnt=0;cnt<str.size();cnt++)
        if(str[cnt]=='L') dir[0]++;
        else if(str[cnt]=='R') dir[1]++;
        else if(str[cnt]=='U') dir[2]++;
        else dir[3]++;
    int a,b;
    a=abs(dir[0]-dir[1]);
    b=abs(dir[2]-dir[3]);
    printf("%d\n",a/2+b/2+((a%2||b%2)?1:0));
}
