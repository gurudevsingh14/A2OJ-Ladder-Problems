#include<bits/stdc++.h>
using namespace std;
#define loop(a, n) for (int i = a; i < n;i++)
typedef long long int ll;
void solve();
int main()
{
  int t = 1;
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
  int x, y, z;
  int ans[3] = {0};
  loop(0, n)
  {
    cin >> x >> y >> z;
    ans[0] += x;
    ans[1] += y;
    ans[2] += z;
  }
  if (ans[0] == 0 && ans[1] == 0 && ans[2] == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}