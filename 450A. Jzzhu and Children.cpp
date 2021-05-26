#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define loop(a, n) for (ll i = a; i < n;i++)
// ll search0(vector<ll>a, ll t);
// ll searchend(vector<ll>a, ll t);
void solve();
int main()
{
	ll t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	int ans = 0;
	vector<int>a(n);
	loop(0, n)	{
		cin >> a[i];
		if (a[i] % m == 0)
			a[i]--;
	}

	loop(0, n)
	{
		if ((a[ans] / m ) <= (a[i] / m))
			ans = i;
	}
	cout << ans + 1 << endl;
}