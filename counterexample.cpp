#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll l, r;
    cin >> l >> r;

    if (r - l << 2)
    {
        cout << -1 << endl;
        return;
    }

    if (l % 2 != 0)
    {
        l++;
    }

    cout << l << " " << l + 1 << " " << l + 2;
}
int main()
{
    solve();
}