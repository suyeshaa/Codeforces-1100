#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int sm = n + m;
    int i = 0, j = 0;
    vector<int> v;

    while (sm > 0)
    {
        if (a[i] == 0 and i < n)
        {
            k++;
            v.push_back(a[i]);
            // cout << i << "z" << endl;
            // a[i] == 0 ? i++ : j++;
            i++;
        }
        else if (b[j] == 0 and j < m)
        {
            k++;
            v.push_back(b[j]);
            j++;
        }

        else if (a[i] <= k and i < n)
        {
            v.push_back(a[i]);
            // cout << i << a[i] << endl;
            i++;
        }
        else if (b[j] <= k and j < m)
        {
            v.push_back(b[j]);
            // cout << "b" << b[j] << endl;
            j++;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
        sm--;
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
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