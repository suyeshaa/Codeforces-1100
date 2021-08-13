#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for (int i = 0; i < n - 1;)
    // {
    //     if (a[i] < a[i + 1])
    //     {
    //         a[i]++;
    //         k--;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    //     if (k == 0 and i != n - 1)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    // }

    int i = 0, idx = 0;

    while (k > 0)
    {
        // cout << a[i] << " " << i << endl;
        if (a[i] < a[i + 1])
        {
            a[i]++;
            idx = i;
            k--;
            i = 0;
            // cout << a[i] << " " << i << " " << k << endl;
        }
        else
        {
            i++;
            idx = i;
        }
        if (idx == n - 1)
        {
            cout << -1 << endl;
            return;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
    }

    cout << idx + 1 << endl;
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