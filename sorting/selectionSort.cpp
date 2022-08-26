#include<bits/stdc++.h>
using namespace std;

//WOrst case as well as time complexity O(n2).
// It is an inplace sortihg algorithm with O(1) space complexity. 
int main(){

    int a[]={2,4,5,325,75,1,0};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }

        }
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

cout<<"\n";
    return 0;
}