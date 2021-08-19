#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '0')
        {
            for (int j = 0; j < i; j++)
            {
                cout << n[j];
            }
            for (int k = i + 1; k < n.length(); k++)
            {
                cout << n[k];
            }
            return;
        }
    }

    for (int i = 0; i < n.length() - 1; i++)
    {
        cout << n[i];
    }
}
int main()
{
    solve();
}