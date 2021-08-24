#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, d;
    cin >> n >> d;

    if (n >= d)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = n; i >= 0; i--)
    {
        if (i + ceil(d / float(i + 1)) <= n)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}