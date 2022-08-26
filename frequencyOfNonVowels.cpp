#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<char> v(26, 0);
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        v[s[i] - 'a']++;
    }
    int cnt = 0;
    string str = "";
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == 'a' || s[i] == 'A') || (s[i] == 'e' || s[i] == 'E') || (s[i] == 'i' || s[i] == 'I') || (s[i] == 'o' || s[i] == 'O') || (s[i] == 'u' || s[i] == 'U'))
        {
            cnt += 1;
        }
        else
        {
            if (v[s[i] - 'a'] > 0)
            {
                str += s[i];
                str += to_string(v[s[i] - 'a']);
                v[s[i] - 'a'] = 0;
            }
        }
    }
    // reverse(str.begin(), str.end());
    cout << str << endl;
    cout << endl
         << endl
         << "vowels are:" << cnt << endl;
    return 0;
}
