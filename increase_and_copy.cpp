#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ans = INT64_MAX;
        cin >> n;
        for (int x = 1; x * x <= n; ++x)
        {
            ans = min(ans, x - 1 + ((n - x) + x - 1) / x);
        }

        cout << ans << endl;
    }
}