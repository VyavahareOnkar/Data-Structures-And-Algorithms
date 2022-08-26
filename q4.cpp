#include<bits/stdc++.h>
using namespace std;

class my_element{
    public:
    int val;
    char c;
    bool ischar = false;
    my_element(int v){
        val = v;
    }
    my_element(char cc){
        c= cc;
        ischar = true;
    }
};


vector<my_element> solve(vector<int>&arr,vector<char>&crr){
    
    int a = arr.size(),b = crr.size();
    vector<my_element>nms;
    vector<my_element>crs;

    for(int it:arr){
        my_element a = my_element(it);
        nms.push_back(a);
    }

    for(char bt:crr){
        my_element a = my_element(bt);
        crs.push_back(a);
    }

    vector<my_element>final_lst;
    int x = 0;
    int p = 0,q = 0;
    bool ok = true;
    while (p<a && q<b)
    {
        if(ok){
            final_lst.push_back(nms[p]);
            p++;
            ok = false;
        }else{
            final_lst.push_back(crs[q]);
            q++;
            ok = true;
        }
    }
    while (p<a)
    {
        final_lst.push_back(nms[p]);
        p++;
    }
    
    while (q<b)
    {
        final_lst.push_back(crs[q]);
        q++;
    }
    for(auto it:final_lst){
        if(it.ischar)
        cout<<it.c<<" ";
        else
        cout<<it.val<<" ";
    }
    return final_lst;
}


int main(){

    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int m;
    cin>>m;
    vector<char>brr(m);
    for(int i=0;i<m;i++)
    cin>>brr[i];
    solve(arr,brr);
  return 0;
}
























// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int a[]={1,2,3};
//     int b[]={a,b,c};


//     vector<int>res;
//     int i=0,j=0;
//     int n = sizeof(a) / sizeof(a[0]);
// 	int m = sizeof(b) / sizeof(b[0]);
//     while(i<n && j<m){
//         res.push_back(a[i]);
//         res.push_back(b[j]);
//         i++;
//         j++;
//     }
//     while(i<n){
//         res.push_back(a[i]);
//         i++;
//     }
//     while(j<m){
//         res.push_back(b[i]);
//         j++;
//     }
//     int x=sizeof(res)/sizeof(res[0]);
//     for(int i=0;i<x;i++){
//         res[i];
//     }

//   return 0;
// }