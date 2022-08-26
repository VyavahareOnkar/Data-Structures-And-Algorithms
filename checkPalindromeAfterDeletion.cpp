#include<bits/stdc++.h>
using namespace std;

 bool isPalindrome(string s){
    int n=s.size();
    int l=0,r=n-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        else {
            l++;
            r--;
        }
    }
    return true;
 }

 bool deleteSymbols(string s){
    string str="";
    for(int i=0;i<s.size();i++){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
            str+=s[i];
        }
    }
    if(isPalindrome(str)){
        return true;
    }
    else{
        return false;
    }
 }



int main(){

    string s;
    cin>>s;

   cout<<deleteSymbols(s);

    return 0;
}