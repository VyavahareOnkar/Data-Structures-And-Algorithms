
#include <bits/stdc++.h>
using namespace std;

int calSumUtil(int a1[], int b1[], int n, int m)
{

	int sum[n];

	int i = n - 1, j = m - 1, k = n - 1;

	int car = 0, s = 0;


	while (j >= 0) {

		s = a1[i] + b1[j] + car;
		sum[k] = (s % 10);

	
		car = s / 10;

		k--;
		i--;
		j--;
	}


	while (i >= 0) {

		s = a1[i] + car;
		sum[k] = (s % 10);
		car = s / 10;

		i--;
		k--;
	}

	int ans = 0;


	if (car)
		ans = 10;

	for (int i = 0; i <= n - 1; i++) {
		ans += sum[i];
		ans *= 10;
	}

	return ans / 10;
}


int calSum(int a[], int b[], int n, int m)
{

	if (n >= m)
		return calSumUtil(a, b, n, m);

	else
		return calSumUtil(b, a, m, n);
}


int main()
{
	int a[] = {9,9,9 };
	int b[] = { 1,1,1 };

	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);

	cout << calSum(a, b, n, m) << endl;

	return 0;
}
