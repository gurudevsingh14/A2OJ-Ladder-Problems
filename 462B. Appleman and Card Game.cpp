#include<bits/stdc++.h>
using namespace std;
#define loop(a, n) for (int i = a; i < n;++i)
#define rep(i,n,m) for(int i=n;i<m;++i)
typedef long long int ll;
void solve();
int main()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll>a(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'A']++;
    }
    sort(a.rbegin(), a.rend());
    ll count = 0;
    for (int i = 0; k > 0 && i < 26; i++)
    {
        if (k <= a[i])
            count += k * k;
        else
            count += a[i] * a[i];

        k -= a[i];
    }
    cout << count << endl;
}