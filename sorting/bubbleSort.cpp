#include <bits/stdc++.h>
using namespace std;


//Best case time complexity is O(n) and worst case is O(n2).
//It is an inplace sorting algorithm with O(1) space complexity.
int main()
{
    int a[] = {1, 35, 57, 0, -1, 3, 11};
    // int a[]={1,3,4,6,7,8};
    // int a[]={7,6,5,4,3,2,1};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i <= n - 1; i++)
    {   
        int j=1,k=0;
        bool flag=false;
        while(j<n-i){
            
            if(a[k]>a[j]){
                swap(a[k++],a[j++]);
                flag=true;
            }
            else{
                k++;j++;
                cout<<"no swapping"<<endl;
            }
        }
        
        if(flag==false){
            cout<<"Already Sorted"<<endl;
            goto onkar;
        }
    }
    onkar:

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}