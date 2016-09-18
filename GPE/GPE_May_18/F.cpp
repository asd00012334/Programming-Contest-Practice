#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        vector<long long int> input;
        vector <long long int> postfix;
        while(1){
            long long int temp=getchar();
            if(temp=='\n') break;
            else if(temp=='.') return 0;
            else if(temp=='+') input.push_back(-1);
            else if(temp=='-') input.push_back(-2);
            else if(temp=='*') input.push_back(-3);
            else if(temp=='/') input.push_back(-4);
            else if(temp=='%') input.push_back(-5);
            else if(temp==' ') ;
            else if(isdigit(temp)){
                ungetc(temp,stdin);
                scanf("%lld",&temp);
                input.push_back(temp);
            }
        }
        bool legal=true;
        if(input.size()==1&&input[0]=='.') break;
        for(int cnt=input.size()-1;cnt>=0;cnt--){
            if(input[cnt]>0) postfix.push_back(input[cnt]);
            else if(input[cnt]<0){
                long long int l,r;
                if(postfix.size()>=2){
                    l=postfix[postfix.size()-1];
                    r=postfix[postfix.size()-2];
                    postfix.pop_back();
                    postfix.pop_back();
                }
                else{
                    legal=false;
                    break;
                }
                long long int result=0;
                if(input[cnt]==-1) result=l+r;
                else if(input[cnt]==-2) result=l-r;
                else if(input[cnt]==-3) result=l*r;
                else if(input[cnt]==-4) result=l/r;
                else if(input[cnt]==-5) result=l%r;
                postfix.push_back(result);
            }
        }
        if(postfix.size()>1) legal=false;
        if(legal) printf("%lld\n",postfix[0]);
        else printf("illegal\n");
    }
    return 0;
}
