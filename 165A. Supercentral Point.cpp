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
	int n;
	cin >> n;
	vector<vector<int>>a(n, vector<int>(2));
	int x, y;
	loop(0, n)
	{
		cin >> x;
		cin >> y;
		a[i][0] = x;
		a[i][1] = y;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		x = a[i][0];
		y = a[i][1];
		int r = 0, l = 0, u = 0, d = 0;
		for (int j = 0; j < n; j++)
		{
			int x1 = a[j][0];
			int y1 = a[j][1];
			if (x1 > x && y == y1)
				r = 1;
			else if (x1 < x && y == y1)
				l = 1;
			else if (x == x1 && y < y1)
				u = 1;
			else if (x == x1 && y > y1)
				d = 1;
		}
		if (r && l && u && d)
			ans++;
	}
	cout << ans << endl;
}