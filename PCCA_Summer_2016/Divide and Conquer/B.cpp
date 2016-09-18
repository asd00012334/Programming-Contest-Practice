#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a,int b){
    return (a<b);
}
int main(){

    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,compare);
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(arr[i]-(i+1));
    }
    cout<<sum<<endl;
}
