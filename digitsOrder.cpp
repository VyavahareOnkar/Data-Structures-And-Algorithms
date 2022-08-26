#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s = to_string(n);
    int cnt1=1,cnt2=1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= s[i - 1])
        {
           cnt1++;
        }
        else{
            cnt2++;
        }
    }
    if(cnt1==s.size()){
        cout<<"ascending order"<<endl;
    }
    else if(cnt2==s.size()){
        cout<<"descending order"<<endl;
    }
    else{
        cout<<"Digits are not in order"<<endl;
    }

    return 0;
}

45689


