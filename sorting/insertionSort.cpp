#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a[] = {1, 7, 10, 4, 8, 2, 11};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp < a[j])
            {
                a[j + 1] = a[j];
                a[j] = temp;
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}