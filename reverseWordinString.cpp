#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    string str = "";
    int l = 0, r = s.size() - 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || i == s.size() - 1)
        {
            l = 0, r = str.size() - 1;
            while (l <= r)
            {
                swap(str[l++], str[r--]);
            }
            cout << str << " ";
            str = "";
        }
        str += s[i];
    }

    cout << str << endl;
    return 0;
}