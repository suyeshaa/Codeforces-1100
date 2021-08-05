#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve()
{
    ll a;
    cin >> a;
    ll cb = cbrt(a);
    // ll i = 5779;
    // ll q = i * i;
    // q = q * i;
    // cout << q << endl;

    // cout << a - (i * i * i) << endl;

    for (ll i = 1; i <= cb; i++)
    {
        ll num = a - (i * i * i);
        ll b = cbrt(num);
        // cout << num << endl;
        if ((i * i * i) + (b * b * b) == a and b > 0)
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