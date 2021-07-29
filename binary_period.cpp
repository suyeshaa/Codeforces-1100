#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool fl = false;
    // cout << s;
    if (s.length() <= 2)
    {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            fl = true;
        }
    }
    // cout << s << endl;

    if (!fl)
    {
        cout << s << endl;
        return;
    }

    bool temp = false;
    vector<char> vec;
    if (s[0] == '1')
    {
        vec.push_back('1');
        temp = true;
    }
    else
    {
        vec.push_back('0');
    }

    for (int i = 1; i < 2 * s.length(); i++)
    {
        if (temp)
        {
            vec.push_back('0');
        }
        else
        {
            vec.push_back('1');
        }
        temp = !temp;
    }

    for (auto x : vec)
    {
        cout << x;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}