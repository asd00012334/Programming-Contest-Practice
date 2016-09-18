#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    bool okay = false;
    for(int cnt=0;cnt<n;cnt++){
        cin>>arr[cnt];
        if(!okay&&arr[cnt][0]==arr[cnt][1]&&arr[cnt][0]=='O'){
            okay = true;
            arr[cnt][0] = arr[cnt][1] = '+';
        }
        else if(!okay&&arr[cnt][3]==arr[cnt][4]&&arr[cnt][3]=='O'){
            okay = true;
            arr[cnt][3] = arr[cnt][4] = '+';
        }
    }
    if(okay){
        cout<<"YES\n";
        for(int cnt=0;cnt<n;cnt++)
            cout<<arr[cnt]<<"\n";
    }
    else cout<<"NO\n";

    return 0;
}
