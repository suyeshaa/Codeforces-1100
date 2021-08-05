#include <bits/stdc++.h>
#define ll long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll k = 0, cnt = 0;
        vector<ll> vec;

        for (ll i = 0; i < n; i++)
        {
            k = i;
            while (k < n)
            {
                cnt += a[k];
                k = k + a[k];
            }
            vec.push_back(cnt);
            cnt = 0;
        }

        // for (auto x : vec)
        // {
        //     cout << x;
        // }

        cout << *max_element(vec.begin(), vec.end()) << endl;
    }
}