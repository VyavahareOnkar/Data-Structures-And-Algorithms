
#include<bits/stdc++.h>
using namespace std;

// void frequency(string s){
 

//  string str=s;
//  int n=s.size();
 

//   for(int i=0;i<n;i++){
//         int cnt=0;
//         for(int j=0;j<n;j++){
//             if(str[i]==str[j]){
//                 cnt++;
//             }
//         }
//         cout<<str[i]<<":"<<cnt<<endl;
//     }

// }

// int main(){

//     string s;
//     cin>>s;
//    frequency(s);


//     return 0;
// }

void freq(string s){

    int i=0;
    vector<int>v(26,0);
    int n=s.size();
    while(i<=n){
        if(s[i]>='a' && s[i]<='z'){
            v[s[i]-'a']++;
        }
        i++;
    }
    for(int i=0;i<26;i++){
        if(v[i]!=0){
            cout<<char(i+'a')<<v[i]<<endl;
        }
    }
}





int main(){

    string s;
    cin>>s;
    
    freq(s);
    return 0;
}


