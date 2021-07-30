#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll cnt = 1, mx = 0;
    bool fl = false;

    if (s.length() == 1 and s[0] == 'L')
    {
        cout << 2 << endl;
        return;
    }

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'L')
        {
            if (s[i + 1] == 'L')
            {
                cnt++;
            }
            else
            {
                mx = max(cnt, mx);
                cnt = 1;
                // cout << mx << endl;
            }
            fl = true;
        }
    }
    mx = max(cnt, mx);

    if (!fl)
    {
        if (s[s.length() - 1] == 'L')
        {
            cout << 2 << endl;
            return;
        }
        cout << 1 << endl;
        return;
    }

    cout << mx + 1 << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}