#include<bits/stdc++.h>
using namespace std;

void sortArrays(int a[],int n,int b[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]>b[j] && i<n && j<m){
            swap(a[i++],b[j++]);
        }
        else if(a[i]<b[j] && i<n && j<m){
            i++;
            
        }
        else{
            i++;
            j++;
        }
    }
   
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
   
}


int main(){

    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sortArrays(a,n,b,m);

    return 0;
}