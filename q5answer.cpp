#include<bits/stdc++.h>
using namespace std;

bool solve(int a[],int b[], int n,int m){
   int j=0;
    for(int i=0;i<n && j<m;i++){
        if(a[i]==b[j]){
            j++;
        }
    }
    if(j==m){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int a[]={5,1,22,25,6,10};
    int b[]={1,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    cout<<solve(a,b,n,m);

    return 0;
}