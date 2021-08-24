#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        int d = 9, cnt = 0;

        while (d <= b)
        {
            cnt++;
            d = d * 10 + 9;
        }

        cout << a * cnt << endl;
    }
}