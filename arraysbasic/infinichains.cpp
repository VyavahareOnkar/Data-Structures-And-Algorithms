#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    int n = s.size();
    char prev = ' ';
    int j = 0;
    string str = "2piaxkf3s89";
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (prev == ' ')
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] -= 32;
            }
        }
        ans += s[i];
        if (j < str.size())
        {
            ans += str[j];
            j++;
        }
        
        prev = s[i];
    }
    while (j < str.size())
        {
            ans += str[j];
            j++;
        }

    return ans;
}

int main()
{

    string s;
    getline(cin, s);
    cout << solution(s) << endl;

    return 0;
}