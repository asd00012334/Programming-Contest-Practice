#include<bits/stdc++.h>

using namespace std;

bool valid(vector<vector<int> > const& mat, int standard){
    for(int row = 0;row<mat.size();row++){
        int partialSum = 0;
        for(int cnt=0;cnt<mat.size();cnt++)
            partialSum+=mat[row][cnt];
        if(partialSum!=standard) return false;
    }
    for(int col = 0;col<mat.size();col++){
        int partialSum = 0;
        for(int cnt=0;cnt<mat.size();cnt++)
            partialSum+=mat[cnt][col];
        if(partialSum!=standard) return false;
    }
    {
        int partialSum = 0;
        for(int cnt=0;cnt<mat.size();cnt++)
            partialSum += mat[cnt][mat.size()-cnt-1];
        if(partialSum!=standard) return false;
    }
    {
        int partialSum = 0;
        for(int cnt=0;cnt<mat.size();cnt++)
            partialSum += mat[mat.size()-cnt-1][cnt];
        if(partialSum!=standard) return false;
    }
    return true;
}

int main(){
    int n;
    pair<int,int> missingCor;
    cin>>n;
    vector<vector<int> > mat(n,vector<int>(n));
    for(int row=0;row<n;row++)
    for(int col=0;col<n;col++){
        scanf("%d",&mat[row][col]);
        if(mat[row][col]==0){
            missingCor.first = row;
            missingCor.second = col;
        }
    }
    if(n==1){
        printf("1\n");
        return 0;
    }
    int standardSum = 0;
    int missingSum = 0;
    for(int cnt=0;cnt<n;cnt++)
        missingSum+=mat[missingCor.first][cnt];
    int tarRow = (missingCor.first+1)%n;
    for(int cnt=0;cnt<n;cnt++)
        standardSum += mat[tarRow][cnt];

    mat[missingCor.first][missingCor.second] = standardSum - missingSum;
    if(missingSum>=standardSum)
        printf("-1\n");
    else if(valid(mat,standardSum))
        printf("%d\n",mat[missingCor.first][missingCor.second]);
    else{
        printf("-1\n");
    }
    return 0;
}
