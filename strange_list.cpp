#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    ;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a;
        ll sum = 0;
        vector<int> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            v.push_back(a);
        }

        bool fl = true;
        int temp = x;

        while (fl)
        {
            for (ll i = 0; i < v.size(); i++)
            {
                if (v[i] % temp == 0)
                {
                    sum += v[i];
                }
                else
                {
                    fl = false;
                    cout << sum << endl;
                    break;
                }
            }
            temp = temp * x;
        }
    }
}