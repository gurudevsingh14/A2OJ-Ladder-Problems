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
  map<ll, ll>mymap0;
  vector<ll>a(n);
  loop(0, n)
  {
    cin >> a[i];
    mymap0[a[i]] = i + 1;
  }
  map<ll, ll>mymap1;
  for (ll i = n - 1; i >= 0; i--)
    mymap1[a[i]] = n - i;
  ll q;
  cin >> q;
  ll target;
  ll v = 0, p = 0;
  loop(0, q)
  {
    cin >> target;
    v += mymap0[target];
    p += mymap1[target];
  }
  //cout << endl;
  cout << v << " " << p << endl;
}