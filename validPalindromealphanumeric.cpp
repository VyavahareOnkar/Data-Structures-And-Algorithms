#include <bits/stdc++.h>

using namespace std;

bool isValid(char c){
    if(c>='a' && c<='z'){
        return true;
    }
    else if(c>='A' && c<='Z'){
        c+=32;
        return true;
    }
    else if(c>='0' && c<='9'){
        return true;
    }
    return false;
}

bool isPalindrome(string s)
{
    int l = 0, r = s.size() - 1;
    while (l <= r)
    {
        if (!isValid(s[l]))
        {
            l++;
            continue;
        }
        if (!isValid(s[r]))
        {
            r--;
            continue;
        }
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{

    string s;
    cin >> s;

    isPalindrome(s)? cout<<"true"<<endl : cout<<"false"<<endl;
    return 0;
}