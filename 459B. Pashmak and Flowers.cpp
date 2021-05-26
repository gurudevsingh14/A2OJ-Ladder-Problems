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
	ll n;
	cin >> n;
	map<ll, ll>mymap;
	ll max1 = 0, min1 = INT_MAX;
	ll a;
	loop(0, n)
	{
		cin >> a;
		mymap[a]++;
		max1 = max(a, max1);
		min1 = min(min1, a);
	}
	if (max1 - min1 == 0)
	{
		cout << "0" << " " << (mymap[max1] * (mymap[max1] - 1)) / 2;
		return;
	}
	ll ans = mymap[max1] * mymap[min1];
	cout << max1 - min1 << " " << ans << endl;
}