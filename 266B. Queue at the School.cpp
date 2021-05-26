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
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  for (int i = 0; i < t; i++)
  {
    for (int j = 0; j < n - 1; j ++)
    {
      if (s[j] == 'B' && s[j + 1] == 'G')
      {
        swap(s[j + 1], s[j]);
        j++;
      }
    }
  }
  cout << s << endl;
}