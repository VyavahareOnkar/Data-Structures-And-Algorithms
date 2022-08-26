#include <bits/stdc++.h>
using namespace std;


//tc-> O(n)+O(nlogn)   sc-> O(1)
int sortApproach(int a[], int n)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            return a[i];
        }
    }
    return -1;
}



// tc->O(n)   sc->O(n)
int freqArrayApproach(int a[], int n)
{
    int freq[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        if (freq[a[i]] == 0)
        {
            freq[a[i]]++;
        }
        else
        {
            return a[i];
        }
    }
    return -1;
}



// tc->O(n) sc->O(1)
int byAdditionApproach(int sum1, int n)
{

// but sum of 1st n natural number is n(n+1)/2

    int sum2 = (n * (n + 1)) / 2;
    return sum1 - sum2;
}



int main()
{

    int n;
    cin >> n;
    int a[n + 1];
    int sum1 = 0;
    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }

    cout << sortApproach(a, n + 1) << endl;
    cout << byAdditionApproach(sum1, n) << endl;
    cout << freqArrayApproach(a, n + 1) << endl;
    return 0;
}
