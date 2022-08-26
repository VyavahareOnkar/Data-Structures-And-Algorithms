#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    int temp=n;
    int sum=0;
    while(temp){
        int rem=temp%10;
        sum+=rem;
        temp/=10;

        if(temp==0 && sum>9){
            temp=sum;
            sum=0;
        }
       
    }
    cout<<sum<<endl;
     

    return 0;
}