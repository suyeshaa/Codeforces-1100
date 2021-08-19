#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;

        for (ll i = 0; i < n; i++)
        {

            if (a[i] > a[i + 1])
            {
                cnt++;
            }

            if (i == n - 2)
            {
                if (a[i] > a[i + 1])
                {
                    cnt++;
                }
            }
        }

        if (cnt <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}