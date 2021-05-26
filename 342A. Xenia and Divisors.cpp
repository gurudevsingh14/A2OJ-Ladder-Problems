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
	vector<int>a(n);
	map<int, int>mymap;
	loop(0, n)
	{
		cin >> a[i];
		if (a[i] == 5 || a[i] == 7)	{
			cout << -1 << endl;
			return;
		}
		mymap[a[i]]++;
	}
	int count4 = 0, count6 = 0, count3 = 0;
	if (mymap[4] <= mymap[2] && mymap[4] <= mymap[1])
	{
		count4 = mymap[4];
		mymap[4] = 0;
		mymap[2] -= count4;
		mymap[1] -= count4;
	}
	if (mymap[3] <= mymap[6] && mymap[3] <= mymap[1])
	{
		count3 = mymap[3];
		mymap[3] = 0;
		mymap[6] -= count3;
		mymap[1] -= count3;
	}
	if (mymap[6] <= mymap[2] && mymap[6] <= mymap[1])
	{
		count6 = mymap[6];
		mymap[6] = 0;
		mymap[2] -= count6;
		mymap[1] -= count6;
	}
	if (count4 + count3 + count6 == n / 3)
	{
		while (count4--)
		{
			cout << "1 2 4" << endl;
		}
		while (count6--)
		{
			cout << "1 2 6" << endl;
		}
		while (count3--)
		{
			cout << "1 3 6" << endl;
		}
	}
	else
		cout << "-1" << endl;
}