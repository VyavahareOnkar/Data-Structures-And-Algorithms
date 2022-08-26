#include<bits/stdc++.h>
using namespace std;

//automorphic number is number in which the no and last digits of square of that number is equal 
//e.g. 76 -->5776
//     25 --> 625
 //    376 -->141376
bool ans(int n,int m){
    while(n!=0){
        if(n%10==m%10){
            n/=10;
            m/=10;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin>>n;

    int m=n*n;
    cout<<ans(n,m);


    return 0;
}