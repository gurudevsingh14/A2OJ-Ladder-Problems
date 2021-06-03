#include<bits/stdc++.h>
using namespace std;
#define loop(a, n) for (int i = a; i < n;++i)
#define rep(i,n,m) for(int i=n;i<m;++i)
typedef long long int ll;
void solve();
int main()
{
    ll x, y, n;
    cin >> x >> y >> n;
    ll mod = 1e9 + 7;
    vector<ll>temp(6, 0);
    temp[0] = x;
    temp[1] = y;
    for (ll i = 2; i < 6; i++)
        temp[i] = temp[i - 1] - temp[i - 2];
    cout << (temp[(n - 1) % 6] % mod + mod)  % mod << endl;
    return 0;
}