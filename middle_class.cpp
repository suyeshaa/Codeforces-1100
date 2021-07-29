#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, sum = 0;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n);

    if ((sum / double(n)) >= k)
    {
        cout << n << endl;
        return;
    }

    ll ptr = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum - a[i];
        ptr++;
        if ((sum / double(n - ptr)) >= k)
        {
            cout << n - ptr << endl;
            return;
        }
    }

    cout << 0 << endl;
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