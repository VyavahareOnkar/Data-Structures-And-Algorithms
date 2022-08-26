#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    string str="";

    int n=s.size();
    int k=1;
    for(int i=0;i<n;i++){
        if(s[i]!=' ' && k--){
            str+=s[i];
        }
        else if(s[i]==' '){
            continue;
        }
        else{
            
        }

    }

    return 0;
}