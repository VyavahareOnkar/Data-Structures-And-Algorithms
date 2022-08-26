// C program to check if an array is a subset of another array

#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int arr2[],
int m, int n)
{
int i = 0;
int j = 0;
for (i = 0; i < n; i++)
{
for (j = 0; j < m; j++)
{
if(arr2[i] == arr1[j])
break;
}

if (j == m)
return 0;
}

return 1;
}


int main()
{
int m,n;
cin>>m;
cin>>n;
int arr1[m],arr2[n];
int i;

for(i=0;i<m;i++)
{
    cin>>arr1[i];
}

for(i=0;i<n;i++)
{
cin>>arr2[i];
}

isSubset(arr1, arr2, m, n)? cout<<"true" : cout<<"false";


return 0;
}

