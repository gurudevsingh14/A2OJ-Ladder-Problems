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
  string s;
  cin >> s;
  string ans = "";
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '.') {
      ans += "0";
    }
    else if (i < n - 1 && s[i] == '-' && s[i + 1] == '.')  {
      ans += "1";
      i++;
    }
    else if (i < n - 1 && s[i] == '-' && s[i + 1] == '-')  {
      ans += "2";
      i++;
    }
  }
  cout << ans << endl;
}