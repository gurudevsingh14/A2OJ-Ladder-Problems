#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define loop(a, n) for (int i = a; i < n;++i)
#define rep(i,n,m) for(int i=n;i<m;++i)
void solve();
int main()
{
    vector<ll>prime(1000001, 1);
    prime[1] = 0;
    for (ll i = 2; i * i <= 1000000; i++)
    {
        if (prime[i] == 1)
            for (ll j = i * i; j <= 1000000; j += i)
                prime[j] = 0;
    }
    ll n;
    cin >> n;
    ll a[n];
    loop(0, n)
    cin >> a[i];

    loop(0, n)
    {
        //cout << sqrt(a[i]) << " " << prime[sqrt(a[i])] << endl;
        ll num = (ll)sqrt(a[i]);
        if (prime[num] == 1 && num * num == a[i])
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
// void solve()
// {

// }
