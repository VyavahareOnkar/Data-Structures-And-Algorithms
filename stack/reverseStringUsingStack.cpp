#include<bits/stdc++.h>
#include<stack>
#include<iostream>
using namespace std;


int main(){
    stack<char>s;
    string str="onkarvyavahare";
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    string ans="";
    while(s.empty()==false){
        ans+=s.top();
        s.pop();
    }
    cout<<ans<<endl;
    return 0;
}