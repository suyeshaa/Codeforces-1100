#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> t(k);
    for (int i = 0; i < k; i++)
    {
        cin >> t[i];
    }

    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        int idx = find(a.begin(), a.end(), t[i]) - a.begin();
        ans.push_back(idx + 1);
        rotate(a.begin(), a.begin() + idx, a.begin() + idx + 1);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}