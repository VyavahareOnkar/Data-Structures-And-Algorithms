#include<bits/stdc++.h>
using namespace std;

//The solution is of O(n) time complexity with O(1) extra space. 

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }cout<<endl;

    return 0;

}