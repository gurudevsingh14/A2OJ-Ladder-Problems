#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a, b, n;
	cin >> a >> b >> n;
	if (a % b == 0) {
		cout << a;
		while (n--) {
			cout << 0;
		}
		cout << "\n";
	}
	else
	{
		n--;
		a *= 10;
		int t = 9;
		while (t > -1)
		{
			if ((a + t) % b == 0) {
				break;
			}
			t--;
		}
		if (t == -1)
			cout << "-1\n";
		else
		{
			a += t;
			cout << a;
			while (n--) {
				cout << 0;
			}
			cout << "\n";
		}
	}
	return 0;
}