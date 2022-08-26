#include<bits/stdc++.h>

using namespace std;

bool isLeapYear(int n){
   
    // if(n%400==0){
    //      return true;
    // }
    // if(n%100==0){
    //     return false;
    // }
    // else if(n%4==0){
    //     return true;
    // }
    // return false;

    return ((n%4==0 && n%100!=0) || n%400==0);

}

int main(){

    int n;
    cin>>n;
    cout<<isLeapYear(n)<<endl<<endl<<endl;

    return 0;
}