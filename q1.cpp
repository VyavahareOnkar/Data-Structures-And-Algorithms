#include<bits/stdc++.h>
using namespace std;

bool checkValid(string s)
{
    stack<char> str;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            str.push(s[i]);
        }
        else if ((s[i] == ')' || s[i] == '}' || s[i] == ']') && str.empty())
        {
            return false;
        }
        else if ((s[i] == ')' && str.top() != '(') || (s[i] == '}' && str.top() != '{') || (s[i] == ']' && str.top() != '['))
        {
            return false;
        }
        else
        {
            str.pop();
        }
    }
    if (str.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    checkValid(s)? cout<<"true":cout<<"false";

return 0;
}
