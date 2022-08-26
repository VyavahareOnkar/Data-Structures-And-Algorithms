#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={1,2,4,10,20,100,2000};
    int len=sizeof(a)/sizeof(a[0]);
    int n;
    cin>>n;
    vector<int>v;
    int sum=0;
    int i=len-1;
    while(sum<=n && i>=0){
        if((sum+a[i])<=n){
            sum+=a[i];
            v.push_back(a[i]);
        }
        else{
            i--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}