#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = n - 1;

    while (true)
    {
        // cout << i << " " << j << endl;
        if (a[i] == a[j])
        {
            // cout << i << " " << j << endl;
            cout << "YES" << endl;
            return;
        }
        j--;
        if (j == i + 1)
        {
            i++;
            j = n - 1;
        }
        if (i == n - 2)
        {
            break;
        }
    }

    cout << "NO" << endl;
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