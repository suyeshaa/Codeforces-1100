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

    ll tw = 0, fif = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
        {
            tw++;
        }
        else if (a[i] == 50)
        {
            fif++;
            if (tw < 1)
            {
                cout << "NO" << endl;
                return;
            }
            tw--;
        }
        else if (a[i] == 100)
        {
            if (tw >= 1 and fif >= 1)
            {
                tw--;
                fif--;
            }
            else if (tw >= 3)
            {
                tw = tw - 3;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

    // ll cash = 0;
    // ll curr = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     curr = a[i] - 25;
    //     // cout << curr << " ";
    //     if (cash >= curr)
    //     {
    //         // cout << cash << endl;
    //         cash += (a[i] - (curr));
    //         // cout << cash << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // cout << "YES" << endl;
}
int main()
{
    solve();
}