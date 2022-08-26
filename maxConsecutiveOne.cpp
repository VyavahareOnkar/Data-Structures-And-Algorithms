#include <bits/stdc++.h>
using namespace std;


//i/p: 1 0 1 1 1 1
//o/p: 4


int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int c = 0, mxcnt = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            c++;
            if(mxcnt<c){
                mxcnt=c;
            }
        }
        else{
            c=0;
        }
       
    }
    cout << mxcnt << endl;

    return 0;
}


