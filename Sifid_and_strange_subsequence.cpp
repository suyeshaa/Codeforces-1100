#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
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

        sort(a, a + n);
        vector<int> v;
        ll cnt = 0, idx = 0, minpos = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= 0)
            {
                cnt++;
                v.push_back(a[i]);
                idx = i;
            }
            else
            {
                minpos = a[i];
                break;
            }
        }

        ll mn = INT_MAX;

        for (ll i = 1; i < v.size(); i++)
        {

            mn = min(abs(a[i - 1] - a[i]), mn);
        }

        // cout << mn << " " << minpos;

        if (mn < minpos or v.size() == n)
        {
            cout << v.size() << endl;
        }
        else
        {
            cout << v.size() + 1 << endl;
        }
    }
}