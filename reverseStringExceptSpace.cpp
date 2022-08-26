
#include <bits/stdc++.h>
using namespace std;


int main() {
    
    string s;
    getline(cin,s);
    int n=s.size();
    int l=0,r=n-1;
    while(l<=r){
        if(s[l]==' '){
            l++;
        }
        else if(s[r]==' '){
            r--;
        }
        else{
            char c=s[l];
            s[l]=s[r];
            s[r]=c;
            l++;
            r--;
       }
    }
    cout<<s<<endl;
    
    return 0;
}


//I/P: I love India
//O/P: a idnI evolI
