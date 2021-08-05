#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        ll x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        ll sum = 0;

        ll pos_pair = min(z1, y2);
        z1 = z1 - pos_pair;
        y2 = y2 - pos_pair;
        sum += pos_pair * 2;

        //0 - 2
        ll pr = min(x1, z2);
        x1 = x1 - pr;
        z2 = z2 - pr;

        // 1 - 0
        ll pr2 = min(y1, x2);
        y1 = y1 - pr2;
        x2 = x2 - pr2;

        ll neg_pair = min(y1, z2);
        sum = sum - neg_pair * 2;

        cout << sum << endl;
    }
}