#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool hate = true;
    for(int cnt=0;cnt<n;cnt++){
        if(cnt) cout<<" that ";
        if(hate) cout<<"I hate";
        else cout<<"I love";
        hate = !hate;
    }
    cout<<" it\n";
    return 0;
}
