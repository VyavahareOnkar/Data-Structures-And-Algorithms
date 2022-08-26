#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    int n = s.size();
    string str = "";
    string finalstr = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            // reverse(str.begin(),str.end());
            str += ' ';
            finalstr += str;

            str = "";
        }
        else
        {
            str = str+s[i];
        }
    }
    // reverse(str.begin(),str.end());
    finalstr += str;

    cout << finalstr << endl;

    return 0;
}