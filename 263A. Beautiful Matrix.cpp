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
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> n;
      if (n == 1) {
        cout << abs(2 - i) + abs(2 - j) << endl;
        return;
      }
    }
  }
}