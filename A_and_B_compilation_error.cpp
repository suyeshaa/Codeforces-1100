#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n], b[n - 1], c[n - 2];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < n - 2; i++)
    {
        cin >> c[i];
    }

    sort(a, a + n), sort(b, b + (n - 1)), sort(c, c + (n - 2));

    ll fl = 0, temp = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (b[i] != a[i])
        {
            fl = 1;
            cout << a[i] << endl;
            break;
        }
    }
    if (fl == 0)
    {
        cout << a[n - 1] << endl;
    }

    for (ll i = 0; i < n - 2; i++)
    {
        if (c[i] != b[i])
        {
            temp = 1;
            cout << b[i] << endl;
            break;
        }
    }
    if (temp == 0)
    {
        cout << b[n - 2] << endl;
    }
}