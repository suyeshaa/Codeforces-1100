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

    int idx_i = 0, idx_j = 0;

    for (ll i = n - 1; i >= 0; i--)
    {

        if (a[i] != b[i])
        {
            idx_j = i;

            if (b[i] + a[i] < 0)
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (a[j] < 0)
                    {
                        idx_i = j;
                        a[i] = b[i];
                        cout << a[i] << " " << a[j] << endl;
                        break;
                    }
                }
            }
            else
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (a[j] > 0)
                    {
                        idx_i = j;
                        a[i] = b[i];
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << b[i] << endl;
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
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