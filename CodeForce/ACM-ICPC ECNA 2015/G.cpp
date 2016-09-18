#include <bits/stdc++.h>
#define ll long long
using namespace std;

typedef vector<int> vec;
typedef vector<vector<int> > Mat;

template<typename type>
bool operator<(vector<type> const& l, vector<type> const& r){
    if(l.size()!=r.size()) return l.size()<r.size();
    int n = min(l.size(),r.size());
    for(int cnt=0;cnt<n;cnt++)
        if(l[cnt]!=r[cnt])
            return l[cnt]<r[cnt];
    return false;
}

ll possible(Mat& mat, int r , int c){
    static map<Mat,ll> ans;
    int n,m;
    n=mat.size();
    m=mat[0].size();
    if(c>=m) return 0;

    if(ans.count(mat)) return ans[mat];

    for(;c<m;c++){
        for(;r<n;r++)
            if(!mat[r][c])
                goto bkt;
        r=0;
    }
    bkt:

    ll output=0LL;
    if(c==m) return 1LL;

    mat[r][c] = 1LL;
    output+=possible(mat,r,c);
    if(r+1<n&&!mat[r+1][c]){
        mat[r+1][c] = 1;
        output+=possible(mat,r,c);
        mat[r+1][c] = 0;
    }

    if(c+1<m&&!mat[r][c+1]){
        mat[r][c+1] = 1;
        output+=possible(mat,r,c);
        mat[r][c+1]=0;
    }
    mat[r][c]=0;

    return ans[mat]=output;//ans[curCol] = output;
}


int main(){
    int n,m;
    cin>>n>>m;
    Mat mat(3,vec(n,0));

    while(m--){
        float a,b;
        scanf("%f%f",&a,&b);
        mat[(int)b][(int)a] = 1;
    }
    printf("%I64d\n",possible(mat,0,0));

    return 0;
}
