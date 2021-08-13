#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            cnt++;
        }
    }

    if (cnt <= 2)
    {
        cout << cnt << endl;
        return;
    }

    int idx = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            idx = i;
            break;
        }
    }

    int idxf = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            idxf = i;
            break;
        }
    }

    int temp = 0;
    int id = 0;

    for (int i = idxf + 1; i < idx; i++)
    {
        temp++;
        if (s[i] == '*')
        {
            id = i;
        }

        if (temp >= k)
        {
            s[id] = 'x';
            i = id;
            temp = 0;
        }
    }
    int an = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            an++;
        }
    }

    cout << an << endl;
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