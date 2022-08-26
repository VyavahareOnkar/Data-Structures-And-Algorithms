#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int n=s.size();
    int arr[256]={0};
    for(int i=0;i<n;i++){
        arr[s[i]]++;
    }
    for(int i=0;i<n;i++){
        if(arr[s[i]]>0){
            cout<<s[i]<<" "<<arr[s[i]]<<" ";
            arr[s[i]]=0;
        }
        cout<<endl;
    }

    return 0;
}