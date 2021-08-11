#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, m = 0;
    vector<int> vt;
    vector<int> vm;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'T')
        {
            t++;
        }
        else
        {
            m++;
        }

        if (t < m)
        {
            cout << "NO" << endl;
            return;
        }
    }

    if ((2 * m != t) or (s[0] == 'M') or (s[n - 1] == 'M'))

    {
        cout << "NO" << endl;
        return;
    }

    int flt = 0, flm = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'T')
        {
            flt++;
        }
        if (s[i] == 'M')
        {
            flm++;
        }

        if (flt < flm)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}