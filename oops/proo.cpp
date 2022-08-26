#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c="";
    cin>>a;
    cin>>b;

    unordered_map<char,int>m;
    for(int i=0;i<b.size();i++)
    {
        m[b[i]]++;
    }
    for(int i=0;i<a.size();i++)
    {
        if(m[a[i]]>0)
        {
            continue;
        }
        else{
            c+=a[i];
        }
    }
    cout<<c<<endl;

    return 0;
}