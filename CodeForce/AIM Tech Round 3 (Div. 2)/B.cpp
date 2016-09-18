#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a;
    cin>>n>>a;
    vector<int> arr(n);
    for(int cnt=0;cnt<n;cnt++)
        scanf("%d",&arr[cnt]);
    sort(arr.begin(),arr.end());
    if(n==1){
        cout<<0<<endl;
    }
    else if(a<=*arr.begin()){
        cout<<arr[arr.size()-2]-a<<endl;
    }
    else if(a>=*arr.rbegin()){
        cout<<a-arr[1]<<endl;
    }
    else{
        int p,q,r,s;
        p = abs(a-arr[0]);
        q = abs(a-arr[arr.size()-1]);
        r = abs(a-arr[arr.size()-2]);
        s = abs(a-arr[1]);
        p+=arr[arr.size()-2]-arr[0];
        q+=arr[arr.size()-1]-arr[1];
        r+=arr[arr.size()-2]-arr[0];
        s+=arr[arr.size()-1]-arr[1];
        cout<<min(min(p,q),min(r,s))<<endl;
    }

    return 0;
}
