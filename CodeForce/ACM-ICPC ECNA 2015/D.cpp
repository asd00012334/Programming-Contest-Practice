#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > mat(n+2,vector<int>(m+2,0));
    for(int row=1;row<=n;row++)
    for(int col=1;col<=m;col++){
        char temp;
        cin>>temp;
        if(temp=='T') mat[row][col] = 100000;
    }
    int maxi = 0;
    for(int lev=1;lev<100;lev++){
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        for(int row=1;row<=n;row++)
        for(int col=1;col<=m;col++){
            if(mat[row][col]!=100000) continue;
            for(int d=0;d<4;d++)
                if(mat[row+dx[d]][col+dy[d]]==lev-1){
                    mat[row][col] = lev;
                    maxi = lev;
                }
        }
    }
    if(maxi<10){
        for(int row=1;row<=n;row++){
            for(int col=1;col<=m;col++){
                printf(".");
                if(mat[row][col]==0) printf(".");
                else printf("%d",mat[row][col]);
            }
            printf("\n");
        }
    }
    else{
        for(int row=1;row<=n;row++){
            for(int col=1;col<=m;col++){
                printf(".");
                if(mat[row][col]<10) printf(".");
                if(mat[row][col]==0) printf(".");
                else printf("%d",mat[row][col]);
            }
            printf("\n");
        }
    }
    return 0;
}
