#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    for(int times=1;;times++){
        int N;
        string ans_c,out_c;
        string ans_d, out_d;
        scanf("%d",&N);
        getchar();
        if(N==0)
            break;
        for(int cnt=0;cnt<N;){
            char temp=getchar();
            if(temp=='\n')
                cnt++;
            if(isdigit(temp))
                ans_d.push_back(temp);
            else
                ans_c.push_back(temp);
        }
        int M;
        scanf("%d",&M);
        getchar();
        for(int cnt=0;cnt<M;){
            char temp=getchar();
            if(temp=='\n')
                cnt++;
            if(isdigit(temp))
                out_d.push_back(temp);
            else
                out_c.push_back(temp);
        }
        printf("Run #%d: ",times);
        if(ans_d==out_d)
            if(ans_c!=out_c)
                printf("Presentation Error\n");
            else
                printf("Accepted\n");
        else
            printf("Wrong Answer\n");
    }
    return 0;
}
