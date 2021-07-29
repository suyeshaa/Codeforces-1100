#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll na = 0, nb = 0;
        ll ma = 0, mb = 0;

        if (a - x < n)
        {
            na = x;
            if (b - y < n - (a - x))
            {
                nb = y;
            }
            else
            {
                nb = b - (n - (a - x));
            }
        }
        else
        {
            na = a - n;
            nb = b;
        }
        if (b - y < n)
        {
            mb = y;
            if (a - x < n - (b - y))
            {
                ma = x;
            }
            else
            {
                ma = a - (n - (b - y));
            }
        }
        else
        {
            mb = b - n;
            ma = a;
        }

        cout << min((ma * mb), (na * nb)) << endl;
    }
}