#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    ll q;
    cin >> q;
    ll idx = 0;
    while (q--)
    {
        ll m;
        cin >> m;

        auto ub = upper_bound(all(a), m);
        cout << ub - a.begin() << endl;
    }
}
int main()
{
    solve();
}