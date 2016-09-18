#include <bits/stdc++.h>
#define ll long long
using namespace std;

typedef vector<vector<int> > Mat;

void rot(pair<int,int>& orig, int n){
    swap(orig.first,orig.second);
    orig.second = n-orig.second-1;
}

int main(){
    int n;
    cin>>n;
    Mat mat(n,vector<int>(n,0));
    vector<pair<int,int> > punch;
    for(int row=0;row<n;row++)
    for(int col=0;col<n;col++){
        char temp;
        cin>>temp;
        if(temp=='.')
            punch.push_back(pair<int,int>(row,col));
    }
    string encrypt;
    cin>>encrypt;
    bool valid = true;
    for(int time=0;valid&&time<4;time++){
        sort(punch.begin(),punch.end());
        for(int cnt=0;cnt<punch.size();cnt++){
            int row = punch[cnt].first;
            int col = punch[cnt].second;
            if(mat[row][col]&&mat[row][col]!=encrypt[time*punch.size()+cnt]){
                valid = false;
                break;
            }
            mat[row][col] = encrypt[time*punch.size()+cnt];
            rot(punch[cnt],n);
        }
    }
    for(int row=0;valid&&row<n;row++){
        for(int col=0;col<n;col++)
            if(!mat[row][col]){
                valid = false;
                break;
            }
    }

    if(!valid) printf("invalid grille\n");
    else{
        for(int row=0;row<n;row++)
        for(int col=0;col<n;col++)
            printf("%c",mat[row][col]);
        printf("\n");
    }
    return 0;
}
