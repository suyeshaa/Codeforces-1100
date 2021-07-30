#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll h = 1, cnt = 0;
    int c = 0, dif = n;

    if (n < 2)
    {
        cout << 0 << endl;
        return;
    }

    while (n > 1)
    {
        c = 2;
        h = 1;
        while (n >= c)
        {
            dif = n - c;
            c = ((3 * h * h) + h) / 2;
            h++;

            // cout << c << " " << dif << endl;
        }

        n = dif;
        // cout << n << endl;
        cnt++;
    }

    cout << cnt << endl;
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
//n >= ((3 * h * h) + h) / 2