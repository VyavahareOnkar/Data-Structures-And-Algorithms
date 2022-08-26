#include <bits/stdc++.h>
using namespace std;
void solution(string s)
{
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int main()
{

    string s;
    cin >> s;

    solution(s);
    return 0;
}