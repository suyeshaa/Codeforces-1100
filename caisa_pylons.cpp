#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll en = 0, sum = 0;

    sum = a[0];

    for (ll i = 1; i < n; i++)
    {
        en += a[i - 1] - a[i];
        if (en < 0)
        {
            sum += -en;
            en = 0;
        }
    }

    cout << sum << endl;
}