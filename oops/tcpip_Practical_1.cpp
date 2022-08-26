#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(string str)
{
    // cout<<s<<endl;
    // string str = s;
    int dec_value = 0;

    int base = 1;

    int len = str.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            dec_value += base;
        }

        base = base * 2;
    }
    // cout<<dec_value<<endl;
    return dec_value;
}

void binaryToDottedNotationConversion(string s)
{

    string ans = "";
    string str = "";
    int var = 1;
    for (int i = 31; i >= 0;)
    {
        while (var <= 8)
        {
            str = s[i] + str;
            i--;
            var++;
        }
        // cout<<i<<endl;
        int res = binaryToDecimal(str);

        if (i > 0)
        {
            ans = '.' + to_string(res) + ans;
        }
        else
        {
            ans = to_string(res) + ans;
        }
        // cout<<ans<<endl;
        // cout<<res<<endl;
        var = 1;
        str = "";
    }
    cout<<"The dotted notation of the givern binary notation is :"<<endl;
    cout << ans << endl;
}

int main()
{
    cout << "Enter the 32 bit binary number or binary notation:" << endl;
    string s;
    cin >> s;

    int n = s.size();
    // cout<<n<<endl;
    if (n != 32)
    {
        cout << "Invalid Input" << endl;
        exit(0);
    }


    binaryToDottedNotationConversion(s);

    return 0;
}