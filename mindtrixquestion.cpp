#include<bits/stdc++.h>
using namespace std;

int nameCount(string &str, string &s)
{
  int m = str.size();
  int n = s.size();
  int count = 0;

 
  for (int i = 0; i <= n - m; i++)
  {
    int j;
    for (j = 0; j < m; j++)
      if (s[i+j] != str[j])
        break;

    
    if (j == m)
    {
    count++;
    }
  }
  return count;
}


int main()
{
    string s,str;
    cin>>s;
    cin>>str;
cout << nameCount(str, s);
return 0;
}
