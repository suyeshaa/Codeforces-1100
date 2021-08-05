#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll idx = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            idx = i + 1;
            break;
        }
    }

    if (idx == 0)
    {
        if (n % 2 == 0)
        {
            cout << "Second" << endl;
            return;
        }
        cout << "First" << endl;
        return;
    }

    if (idx % 2 == 0)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
    }
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