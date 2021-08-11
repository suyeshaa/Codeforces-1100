#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int one = 0, zer = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 1)
            {
                one++;
            }
            else
            {
                zer++;
            }
        }

        if (zer >= n / 2)
        {
            cout << zer << endl;
            for (int i = 0; i < zer; i++)
            {
                cout << 0 << " ";
            }
        }
        else
        {
            cout << one - one % 2 << endl;
            for (int i = 0; i < one - one % 2; i++)
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
}