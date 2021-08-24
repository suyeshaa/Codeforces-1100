#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s[i] = a[i];
        }

        // for (auto x : s)
        // {
        //     cout << x.first << " ";
        // }

        sort(s.begin(), s.end());

        for (int i = n - 1; i >= 0; i--)
        {
        }
    }
}