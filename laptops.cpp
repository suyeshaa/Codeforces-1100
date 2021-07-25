#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vec;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    sort(vec.begin(), vec.end());

    for (ll i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i].second > vec[i + 1].second)
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;
}
int main()
{
    solve();
}