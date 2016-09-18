#include <bits/stdc++.h>

using namespace std;

template<typename iter>
bool isvalid(iter begin, iter end){
    int size=end-begin+1;
    if(size<5) return false;
    int last[5] ={5,7,5,7,7};
    int cnt=0;
    for(int state=0;state<5;state++){
        while(last[state]>0){
            if(cnt>=size) return false;
            last[state]-=begin[cnt];
            cnt++;
        }
        if(last[state]!=0) return false;
    }
    return true;
}

int main(){
    while(1){
        int n;
        cin>>n;
        if(!n) break;
        int arr[n];
        for(int cnt=0;cnt<n;cnt++){
            string temp;
            cin>>temp;
            arr[cnt]=temp.size();
        }
        int ans=0;
        for(int form=0;form<n;form++)
        for(int latt=form+4;latt<n;latt++){
            if(isvalid(arr+form,arr+latt)){
                ans=form+1;
                goto tag;
            }
        }
        tag:
        printf("%d\n",ans);
    }
    return 0;
}
