#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(string s)
{
    int num;
    stringstream obj;
    obj << s;
    obj >> num;
    string str;
    while (num)
    {
        if (num & 1) // 1
            str = '1' + str;
        else // 0
            str = '0' + str;
        num >>= 1; // Right Shift by 1
    }
    if (str.size() < 8)
    {
        while (str.size() < 8)
        {
            str = '0' + str;
        }
    }
    return str;
}

void dottedToBinary(string s, int n)
{
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        string str = "";
        while (s[i] != '.')
        {
            str = s[i] + str;
            i--;
        }
        string res = decimalToBinary(str);
        ans = res + ans;
        str = "";
    }
    cout << "binary notation is:" << endl;
    cout << ans << endl;
    cout << ans.size() << endl;
}

int main()
{
    string s;
    cout << "dotted notation is:" << endl;
    cin >> s;

    int n = s.size();
    string str = "";
    bool flag = true;
    int i = 0;
    while (i < n)
    {
        while (s[i] != '.' && i < n)
        {
            str += s[i];
            i++;
        }
        // cout << str << "  ";

        if ((str) < "0" || (str) > "255")
        {
            flag = false;
            break;
        }
        str = "";
        i++;
    }

    if (flag == false)
    {
        cout << "Invalid Input" << endl;
    }
    else
    {
        dottedToBinary(s, n);
    }

    return 0;
}