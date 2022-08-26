#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3,65,4,5,13,8};
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}