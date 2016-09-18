#include <bits/stdc++.h>

using namespace std;

bool reading = true;

pair<char,int> getWord(){
    pair<char,int> output(0,0);
    while(1){
        char temp=getchar();
        if(temp=='\n'||temp==EOF){
            reading = false;
            break;
        }
        else if(output.first==0){
            output.first=temp;
            output.second=1;
        }
        else if(output.first==temp)
            output.second++;
        else{
            ungetc(temp,stdin);
            break;
        }
    }
    return output;
}

int main(){
    while(reading){
        pair<char,int> output = getWord();
        if(output.second)
            printf("%c%d",output.first,output.second);
    }
    printf("\n");

    return 0;
}
