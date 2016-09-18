#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int times=1;;times++){
        int n;
        scanf("%d",&n);
        if(!n) break;
        while(getchar()!='\n');
        string sol[n];
        string sol_num[n],sol_str[n];
        for(int cnt=0;cnt<n;cnt++){
            getline(cin,sol[cnt]);
            for(int cnt2=0;cnt2<sol[cnt].size();cnt2++)
                if(isdigit(sol[cnt][cnt2])) sol_num[cnt].push_back(sol[cnt][cnt2]);
                else sol_str[cnt].push_back(sol[cnt][cnt2]);
        }
        int m;
        scanf("%d",&m);
        while(getchar()!='\n');

        string sub[n];
        string sub_num[n],sub_str[n];
        for(int cnt=0;cnt<n;cnt++){
            getline(cin,sub[cnt]);
            for(int cnt2=0;cnt2<sub[cnt].size();cnt2++)
                if(isdigit(sub[cnt][cnt2])) sub_num[cnt].push_back(sub[cnt][cnt2]);
                else sub_str[cnt].push_back(sub[cnt][cnt2]);
        }
        /**number trial*/
        int num_error=0;
        for(int line=0;line<n;line++){
            if(sol_num[line]!=sub_num[line]) num_error++;
        }
        /**str trial*/
        int str_error=0;
        for(int line=0;line<n;line++){
            if(sol_str[line]!=sub_str[line]) str_error++;
        }
        if(num_error) printf("Run #%d: Wrong Answer\n",times);
        else if(!str_error) printf("Run #%d: Accepted\n",times);
        else if(str_error) printf("Run #%d: Presentation Error\n",times);
    }
    return 0;
}
