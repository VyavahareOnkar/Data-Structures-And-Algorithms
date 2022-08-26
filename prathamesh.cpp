#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={1,4,2,56,7,4,11};
    int n=sizeof(a)/sizeof(a[0]);
    int k=4;
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(k!=a[i]){
            continue;
        }
        if(first==-1){
            first=i;
        }
        last=i;
    }
    cout<<first<<" "<<last<<endl;
    return 0;
}