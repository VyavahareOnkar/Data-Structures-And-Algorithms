#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a = {3,5,3,2,2,6,6,8,8,11,23,4};

    int n=a.size();
    vector<int>v(n,0);
    vector<int>ans;
    for(int i=0;i<n;i++){
        v[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(v[a[i]]>=2){
            ans.push_back(a[i]);
            v[a[i]]=1;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}