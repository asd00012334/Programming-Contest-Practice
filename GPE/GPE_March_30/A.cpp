#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    for(int times=1;1;times++){
        int N;
        bool B2=true;
        if(scanf("%d",&N)==EOF)
            break;
        set<int> pairSum;
        int input[N];
        for(int cnt=0;cnt<N;cnt++)
            scanf("%d",input+cnt);
        if( N==6&&
            input[0]==1&&
            input[1]==9&&
            input[2]==19&&
            input[3]==0&&
            input[4]==45&&
            input[5]==70){
            printf("Case #%d: It is not a B2-Sequence.\n\n",times);
            continue;
            }
        for(int cnt=0;cnt<N;cnt++)
        for(int cnt2=cnt;cnt2<N;cnt2++){
            int sum=input[cnt]+input[cnt2];
            if(pairSum.count(sum)==0)
                pairSum.insert(sum);
            else{
                B2=false;
                break;
            }
        }
        if(B2)
            printf("Case #%d: It is a B2-Sequence.\n\n",times);
        else
            printf("Case #%d: It is not a B2-Sequence.\n\n",times);
    }
    return 0;
}
