#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int eve = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            eve++;
        }
        else
        {
            odd++;
        }
    }

    sort(a, a + n);

    if (eve % 2 == 0 and odd % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] == 1)
        {
            cout << "YES" << endl;
            return;
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