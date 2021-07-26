#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n % 2 != k % 2)
    {
        cout << "NO" << endl;
        return;
    }

    auto sqr = sqrt(n);
    // sqr = ceil(sqr);

    if (k <= sqr)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}