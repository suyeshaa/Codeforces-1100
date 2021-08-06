#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int cnt = 1;

    if (a <= 1 and b <= 1)
    {
        cout << 0 << endl;
        return;
    }

    while (true)
    {
        while (b > 2)
        {
            a++;
            b -= 2;
            cnt++;
            // cout << a << " " << b << endl;
        }

        while (a > 2)
        {
            b++;
            a -= 2;
            // cout << a << " " << b << endl;

            cnt++;
        }

        if (a <= 2 and b <= 2)
        {
            break;
        }

        // cnt++;
    }

    cout << cnt << endl;
}
int main()
{
    solve();
}