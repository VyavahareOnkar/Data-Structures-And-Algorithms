#include <bits/stdc++.h>
using namespace std;

int main()
{
    // onkar krushna vyavahare____
    string s;
    getline(cin, s);

    int n = s.size();
    int i = n - 2, j = n - 1;
    bool flag = false;
    while (s[i]==' '){
        i--;
    }
    while(i<j){
        if(s[i]!=' '){
            s[j--]=s[i--];
        }
        else{
            s[j--]='0';
            s[j--]='2';
            s[j--]='%';
            i--;
        }
    }
    cout<<s<<endl;

    return 0;
}

// int main()
// {

//     string s = "Onkar Vyavahare";
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == ' ')
//         {
//             s.erase(i, 1);

//             s.insert(i, "%20");

//             i += 3;
//         }
//     }
//     cout << s << endl;
//     return 0;
// }