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

        ll mn = a[n - 1], cnt = 0;

        for (ll i = n - 2; i >= 0; i--)
        {
            if (mn < a[i])
            {
                cnt++;
            }
            else
            {
                mn = min(a[i], mn);
            }
        }

        cout << cnt << endl;
    }
}