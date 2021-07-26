#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    m = m + 1;
    vector<int> v;
    while (m--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int x = v[v.size() - 1], t = 0, cnt = 0;
    // cout << x << endl;

    for (int i = 0; i < v.size() - 1; i++)
    {
        cnt = 0;

        ll s = x ^ v[i];
        string p = to_string(s);
      
        if (__builtin_popcount(s) <= k)
        {
            t++;
        }
    }

    cout << t << endl;
}