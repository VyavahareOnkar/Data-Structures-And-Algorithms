#include<bits/stdc++.h>

using namespace std;


// 5
// 1 4 3 7 8
int secondMin(vector<int> v,int mx,int secMx){

    int mn=INT_MAX;
    int secondMn=INT_MAX;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]<mn){
            secondMn=mn;
            mn=v[i];
        }
        if(v[i]<secondMn && v[i]!=mn){
            
            secondMn=v[i];
            
        }
    }
        if((mx-secondMn)>(secMx-mn)){
            return mx-secondMn;
        }
        else{
            return secMx-mn;
        }

}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int mx=INT_MIN;
    int secMx=INT_MIN;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>mx){
            secMx=mx;
            mx=v[i];
        }
       
    }


    cout<<secondMin(v,mx,secMx);

    return 0;
}