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

    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    bool pos = false, neg = false;

    if (a[0] != b[0])
    {
        cout << "NO" << endl;
        return;
    }

    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] == 1)
        {
            pos = true;
        }
        if (a[i - 1] == -1)
        {
            neg = true;
        }

        if (a[i] > b[i])
        {
            if (!neg)
            {
                cout << "NO" << endl;
                return;
            }
        }

        if (a[i] < b[i])
        {
            if (!pos)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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