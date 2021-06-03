#include<bits/stdc++.h>
using namespace std;
#define loop(a, n) for (int i = a; i < n;i++)
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    for (int i = 10000000 - n; i < 10000000; i++) cout << i << " ";
    return 0;
}