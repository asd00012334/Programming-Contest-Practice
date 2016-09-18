#include <bits/stdc++.h>

using namespace std;

bool ischar(int temp){
    if('A'<=temp&&temp<='Z')
        return true;
    if('a'<=temp&&temp<='z')
        return true;
    return false;
}


string readWord(){
    string output;
    bool word=false;
    while(1){
        int temp=getchar();
        if(ischar(temp)){
            output.push_back(temp);
            word=true;
        }
        else if(!word){
            output.push_back(temp);
            break;
        }
        else{
            ungetc(temp,stdin);
            break;
        }
    }
    return output;
}


int main(){
    vector<string> lis;
    while(1){
        int temp;
        temp=getchar();
        if(temp=='0') return 0;
        else if(isdigit(temp)){
            ungetc(temp,stdin);
            int t;
            scanf("%d",&t);
            cout<<lis[lis.size()-t];
            for(int cnt=lis.size()-t;cnt<lis.size()-1;cnt++)
                swap(lis[cnt],lis[cnt+1]);
        }
        else{
            ungetc(temp,stdin);
            string str;
            str=readWord();
            if(ischar(str[0])){
                lis.push_back(str);
                cout<<str;
            }
            else cout<<str;
        }
    }
    return 0;
}
