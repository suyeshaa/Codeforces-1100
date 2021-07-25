#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll initSum = 0;
    vector<int> h(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> h[i];
        if (i < k)
        {
            initSum += h[i];
        }
    }

    ll mn = initSum;
    ll idx = 0;

    for (ll i = 1; i <= n - k; i++)
    {
        ll sum = 0;
        initSum = initSum - h[i - 1] + h[(k - 1) + i];
        // cout << initSum << " " << i << endl;
        // mn = min(mn, sum);
        if (initSum < mn)
        {
            mn = initSum;
            idx = i;
            // cout << mn << idx << endl;
        }
    }
    cout << idx + 1 << endl;
}