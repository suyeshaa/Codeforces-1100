#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;

    if (sum != 0 and sum % 5 == 0)
    {
        cout << sum / 5 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}