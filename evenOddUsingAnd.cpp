#include<bits/stdc++.h>
using namespace std;


//even odd using BITWISE AND Operation.
int main(){


    int n;
    cin>>n;
    if(n&1){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
    return 0;
}