#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (2 * a < b)
    {
        cout << a << endl;
        return;
    }

    if (2 * b < a)
    {
        cout << b << endl;
        return;
    }

    cout << (a + b) / 3 << endl;
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