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
  int count = 0;
  int temp;
  loop(0, n) {
    cin >> temp;
    count += temp;
  }
  n++;
  int ans = 0;
  for (int i = 1; i <= 5; i++)
  {
    if ((count + i) % n != 1)
      ans++;
  }
  cout << ans << endl;
}