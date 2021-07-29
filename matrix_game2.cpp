#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> row;
        set<int> col;
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        int chn = min((n - row.size()), (m - col.size()));
        if (chn % 2 == 0)
        {
            cout << "Vivek" << endl;
        }
        else
        {
            cout << "Ashish" << endl;
        }
    }
}