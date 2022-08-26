#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
             cout<<++k<<" ";
        }
        cout<<"\n";
    }
    return 0;
}