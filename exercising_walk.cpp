#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        ll totx = x - a + b;
        ll toty = y - c + d;

        if (totx >= x1 and totx <= x2 and toty >= y1 and toty <= y2 and (x2 > x1 || a + b == 0) and (y2 > y1 || c + d == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}