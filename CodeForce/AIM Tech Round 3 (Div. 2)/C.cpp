#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int form,latt;
    for(form=0;form<str.size();form++)
        if(str[form]!='a') break;
    for(latt=form;latt<str.size();latt++)
        if(str[latt]=='a') break;
    if(latt-form<=0){
        str.back() = 'z';
        cout<<str<<endl;
        return 0;
    }
    for(int cnt=form;cnt<latt;cnt++)
        str[cnt]--;
    cout<<str<<endl;

    return 0;
}
