#include <bits/stdc++.h>

using namespace std;

// Approach used at here is sliding window approach.
// which gives us the time complexity of O(n).

int main()
{

    /*  
        7 5 4 6 8 9
        k=3,n=5,x=20
        sum 16 15 18 23
    */
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    if (sum < x)
        ans = max(sum, ans);

    // cout<<ans<<endl;
    for (int i = k; i < n; i++)
    {
        sum -= a[i - k];
        sum += a[i];

        if (sum < x)
        {
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
    return 0;
}