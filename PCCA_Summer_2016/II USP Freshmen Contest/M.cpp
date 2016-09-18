#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> mapp(n);
    for(int cnt=0;cnt<n;cnt++)
        cin>>mapp[cnt];
    int row, col;
    int money = 0;
    int maxi=0;
    row=col=0;
    int dir=1;
    while(1){
        if(row==n-1&&col==m-1) break;
        if(col==m){
            row++;
            col--;
            dir*=-1;
        }
        else if(col==-1){
            row++;
            col++;
            dir*=-1;
        }
        else if(mapp[row][col]=='.'){
            money++;
            maxi=max(maxi,money);
            col+=dir;
        }
        else if(mapp[row][col]=='L'){
            money=0;
            col+=dir;
        }
        else
            col+=dir;

    }
    printf("%d\n",maxi);
    return 0;
}
