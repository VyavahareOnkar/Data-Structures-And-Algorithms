
#include <bits/stdc++.h>
using namespace std;

int decimalConversion(string s){
    int n=s.size();
    int ans=0;
    int base=1;
    for(int i=n-1;i>=0;i--){
        ans+=(s[i]-'0')*base;
        base=base*2;
    }
    return ans;
}


int main() {
  string s;
  cin>>s;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int a1=decimalConversion(s);
 
  int j=0;
  for(int i=0;i<s.size();i++){
      if(j<n  && i==a[j]){
         s[i]='0';
          j++;
      }
     
  }
  int b1=decimalConversion(s);
   cout<<a1-b1<<endl;
  
    return 0;
}