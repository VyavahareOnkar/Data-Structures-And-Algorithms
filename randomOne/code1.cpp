// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int k, a, b;
//     cin >> k;
//     cin >> a >> b;

//     int ans;
//     int c = min(a, b);
//     int d = max(a, b);
//     if (k % 2 == 1)
//     {
//         ans = d - c - 1;
//     }
//     else
//     {
//         (d - c) == (k / 2) ? ans = 0 : ans = d - c - 1;
//     }
//     cout << ans << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    int a, b;
    cin >> a >> b;
    int ans;
    int c, d;
    c = min(a, b);
    d = max(a, b);
    if (k % 2 == 1)
    {

        ans = d - c - 1;
        int x, y;
        x = k - d;
        y = c - 1;
        ans = min(ans, x + y);
    }
    else
    {
        if ((d - c) == (k / 2))
        {
            ans = 0;
        }
        else
        {
            ans = d - c - 1;
            int x, y;
            x = k - d;
            y = c - 1;
            ans = min(ans, x + y);
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}