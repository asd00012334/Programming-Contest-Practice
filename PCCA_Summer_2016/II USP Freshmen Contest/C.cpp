#include <bits/stdc++.h>

using namespace std;

int main(){
    int pile[3];
    scanf("%d%d",pile+1,pile+2);
    bool player=true;
    while(1){
        printf("%d %d\n",pile[1]<pile[2]?2:1, abs(pile[2]-pile[1]));
        pile[2]=pile[1]=min(pile[1],pile[2]);
        fflush(stdout);
        if(max(pile[1],pile[2])==0) break;
        int p, taken;
        scanf("%d%d",&p,&taken);
        pile[p]-=taken;
        if(max(pile[1],pile[2])==0) break;
    }
    return 0;
}
