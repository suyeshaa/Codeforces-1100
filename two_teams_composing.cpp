#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n;
    cin >> n;
    vector<int> v;
    set<int> s;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
        s.insert(a);
    }

    sort(v.begin(), v.end());
    ll cnt = 1;
    ll mx = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    mx = max(mx, cnt);
    ll len = s.size();

    cout << max(min(len - 1, mx), min(len, mx - 1)) << endl;
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