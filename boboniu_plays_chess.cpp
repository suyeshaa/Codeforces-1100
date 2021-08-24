#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    cout << x << " " << y << '\n';
    cout << 1 << " " << y << '\n';

    for (int i = 1; i <= n; ++i)
    {

        if (i % 2 == 1)
        {
            for (int j = 1; j <= m; ++j)
            {
                if ((i == x && j == y) || (i == 1 && j == y))
                    continue;

                cout << i << " " << j << '\n';
            }
        }
        else
        {
            for (int j = m; j >= 1; --j)
            {
                if ((i == x && j == y) || (i == 1 && j == y))
                    continue;

                cout << i << " " << j << '\n';
            }
        }
    }
}
