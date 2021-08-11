#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] > 0)
                {
                    a[i] = (-1) * a[i];
                }
            }
            else
            {
                if (a[i] < 0)
                {
                    a[i] = (-1) * a[i];
                }
            }
        }

        for (auto x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}