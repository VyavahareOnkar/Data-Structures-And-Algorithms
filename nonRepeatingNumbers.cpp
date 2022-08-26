#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int i=0;
    for(int j=s.size()-1;j>=0;j--){
        if(i==j){
            continue;
        }
        else if(s[i]==s[j]){
            cout<<s[i]<<" ";
            i++;
        }
    }


    return 0;
}