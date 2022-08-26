#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={1,3,23,54,65,77,88};
    int n=sizeof(a)/sizeof(a[0]);
    
    int i=0,j=1;
    while(i<=n-2 && j<=n-1){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i+=2;
        j+=2;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}