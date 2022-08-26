#include<bits/stdc++.h>
using namespace std;

void divisiblebyfive(int v[],int n){

  
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(v[i]%5==4){
            ans.push_back(v[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}


int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    divisiblebyfive(a,n);

    return 0;
}