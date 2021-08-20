#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a;
    unordered_map<int, int> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        s[a] = i;
    }

    // for (auto x : s)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    ll sm = 0, sm2 = 0;

    ll m;
    cin >> m;
    ll b;
    for (ll i = 0; i < m; i++)
    {
        cin >> b;

        sm += s[b] + 1;
        sm2 += n - s[b];
    }

    cout << sm << " " << sm2 << endl;
}