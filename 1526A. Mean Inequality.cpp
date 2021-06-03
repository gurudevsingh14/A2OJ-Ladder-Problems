#include<bits/stdc++.h>
using namespace std;
#define loop(a, n) for (int i = a; i < n;++i)
#define rep(i,n,m) for(int i=n;i<m;++i)
typedef long long int ll;
void solve();
int main()
{
    int t;
    cin >> t;
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
    int a[2 * n];
    loop(0, 2 * n)
    cin >> a[i];
    sort(a, a + 2 * n);
    int i = 0, j = 2 * n - 1;
    rep(k, 0, n)
    {
        cout << a[i] << " " << a[j] << " ";
        i++;
        j--;
    }
    cout << "\n";
}
