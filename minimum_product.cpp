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
        ll newa = 0, newb = 0, prod1 = 0;
        ll na = 0, nb = 0, pd1 = 0;

        if (a - x <= n)
        {
            newa = x;
            if (b - (n - (a - x)) <= 0)
            {
                newb = y;
            }
            else
            {
                newb = b - (n - (a - x));
            }
        }
        else
        {
            newa = a - n;
            newb = b;
        }
        prod1 = newa * newb;

        if (b - y <= n)
        {
            nb = y;
            if (a - (n - (b - y)) <= 0)
            {
                na = x;
            }
            else
            {
                na = a - (n - (b - y));
            }
        }
        else
        {
            nb = b - n;
            na = a;
        }
        pd1 = na * nb;

        cout << min(pd1, prod1) << endl;
    }
}