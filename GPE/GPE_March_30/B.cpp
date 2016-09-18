#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

string strPow(string const& base, int exponent);

string strPart(string const& base, int l, int r);

int main(){
    while(1){
        string input;
        getline(cin,input);
        if(input[0]=='.')
            break;
        int siz=input.size();
        int subSiz;
        for(subSiz=1;subSiz<=siz;subSiz++){
            if(siz%subSiz!=0)
                continue;
            string part=strPart(input,0,subSiz-1);
            if(strPow(part,siz/subSiz)==input)
                break;
            else
                continue;
        }
        printf("%d\n",siz/subSiz);

    }
    return 0;
}

string strPow(string const& base, int exponent){
    if(exponent==0)
        return "";
    else if(exponent%2==0){
        string temp=strPow(base,exponent/2);
        return temp+temp;
    }
    else if(exponent%2==1){
        string temp=strPow(base,exponent/2);
        return temp+temp+base;
    }
}

string strPart(string const& base, int l, int r){
    string output;
    for(int cnt=l;cnt<=r;cnt++)
        output.push_back(base[cnt]);
    return output;
}
