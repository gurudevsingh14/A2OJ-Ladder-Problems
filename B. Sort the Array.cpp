#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	int l = -1, r = -1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1] && l == -1) {
			l = i - 1;
		}
		if ((a[i] > a[i - 1] || i == n - 1) && l != -1 && r == -1) {
			if (i == n - 1 && a[i - 1] > a[i])
				r = i;
			else
				r = i - 1;
		}
	}
	if (l == -1 && r == -1) {
		cout << "yes\n";
		cout << "1 1\n";
		return 0;
	}
	sort(a + l, a + r + 1);
	sort(b, b + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i]) {
			cout << "no\n";
			return 0;
		}
	}
	cout << "yes\n";
	cout << l + 1 << " " << r + 1 << "\n";
	return 0;
}