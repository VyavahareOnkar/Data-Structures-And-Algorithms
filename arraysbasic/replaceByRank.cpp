#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    sort(b,b+n);
    map<int,int>m;
    int x=1;
    for(int i=0;i<n;i++)
    {
        m[b[i]]=x++;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=m[a[i]];
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(a,n);
}