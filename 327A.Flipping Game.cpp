#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define loop(a, n) for (int i = a; i < n;++i)
#define rep(i,n,m) for(int i=n;i<m;++i)
void solve();
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    loop(0, n) {
        cin >> a[i];
        if (a[i] == 1)
            count++;
    }
    if (count == n) {
        cout << count - 1 << "\n";
        return 0;
    }
    int b[n];
    loop(0, n)
    {
        if (a[i] == 1)
            b[i] = -1;
        else
            b[i] = 1;
    }
    int max_so_far = b[0];
    int curr_max = b[0];

    for (int i = 1; i < n; i++)
    {
        curr_max = max(b[i], curr_max + b[i]);
        max_so_far = max(max_so_far, curr_max);
    }

    if (max_so_far >= 0)
        cout << count + max_so_far << "\n";
    else
        cout << count << "\n";
    return 0;
}
// void solve()
// {

// }
