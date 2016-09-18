#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;

int main(){
    cin>>n>>m;
    bool rowList[n+1];
    bool colList[n+1];
    ll rowNum,colNum;
    rowNum=colNum=n;
    memset(rowList,0,sizeof(rowList));
    memset(colList,0,sizeof(colList));
    for(int cnt=0;cnt<m;cnt++){
        int r,c;
        scanf("%d%d",&r,&c);
        if(!rowList[r]){
            rowList[r]=true;
            rowNum--;
        }
        if(!colList[c]){
            colList[c]=true;
            colNum--;
        }
        if(cnt) printf(" ");
        printf("%I64d",rowNum*colNum);
    }
    printf("\n");
    return 0;
}
