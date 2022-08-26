#include<bits/stdc++.h>
using namespace std;

int main(){

    int *p,*q;
    p=new int[5];

    for(int i=0;i<5;i++){
        cin>>p[i];
    }

    q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    //  p=NULL;
     delete p;
   
    // q=NULL; 
    cout<<"q is printed here"<<endl;
    for(int i=0;i<5;i++){
       
        cout<<q[i]<<" ";
    }
    cout<<endl;
    cout<<"p is printed here"<<endl;
    for(int i=0;i<5;i++){
        
        cout<<p[i]<<" ";
    }
    // cout<<endl<<<<endl;
    return 0;
}