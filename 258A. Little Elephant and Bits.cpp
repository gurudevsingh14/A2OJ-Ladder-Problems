#include<bits/stdc++.h>
using namespace std;
#define loop(a, n) for (int i = a; i < n;++i)
#define rep(i,n,m) for(int i=n;i<m;++i)
typedef long long int ll;
void solve();
int main()
{
    string s;
    cin >> s;
    int zero = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0') {
            zero = i;
            break;
        }
    }
    if (zero == -1)
        cout << s.substr(0, s.size() - 1);
    else
        cout << s.substr(0, zero) << s.substr(zero + 1);
    cout << "\n";
    return 0;
}
// void solve()
// {

// }
