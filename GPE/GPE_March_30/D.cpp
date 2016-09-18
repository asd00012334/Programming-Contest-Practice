#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int drillNum=0;
int rowNum,colNum;

void drill(char** mapp, int row, int col);

int main(){
    while(1){
        drillNum=0;
        scanf("%d%d",&rowNum,&colNum);
        if(rowNum==0)
            break;
        while(getchar()!='\n');

        char **mapp=new char* [rowNum+2];
        for(int cnt=0;cnt<rowNum+2;cnt++)
            mapp[cnt]=new char[colNum+2];

        for(int row=0;row<rowNum+2;row++)
        for(int col=0;col<colNum+2;col++){
            mapp[row][col]='*';
        }


        for(int row=1;row<=rowNum;row++){
            for(int col=1;col<=colNum;col++){
                mapp[row][col]=getchar();
            }
            getchar();
        }
        while(1){
            bool flag=false;
            for(int row=1;row<=rowNum;row++){
                for(int col=1;col<=colNum;col++){
                    if(mapp[row][col]=='@'){
                        drill(mapp,row,col);
                        drillNum++;
                        flag=true;
                        break;
                    }
                }
                if(flag)
                    break;
            }
            if(!flag){
                printf("%d\n",drillNum);
                break;
            }
        }
        for(int cnt=0;cnt<rowNum+2;cnt++)
            delete mapp[cnt];
        delete mapp;
    }
    return 0;
}

void drill(char** mapp, int row, int col){
    mapp[row][col]='*';
    if(mapp[row-1][col-1]=='@')
        drill(mapp,row-1,col-1);
    if(mapp[row-1][col]=='@')
        drill(mapp,row-1,col);
    if(mapp[row-1][col+1]=='@')
        drill(mapp,row-1,col+1);
    if(mapp[row][col-1]=='@')
        drill(mapp,row,col-1);
    if(mapp[row][col+1]=='@')
        drill(mapp,row,col+1);
    if(mapp[row+1][col-1]=='@')
        drill(mapp,row+1,col-1);
    if(mapp[row+1][col]=='@')
        drill(mapp,row+1,col);
    if(mapp[row+1][col+1]=='@')
        drill(mapp,row+1,col+1);
}
