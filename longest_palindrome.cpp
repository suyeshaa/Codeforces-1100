#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;

    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    // for (auto x : v)
    // {
    //     cout << x;
    // }

    vector<string> center;
    string left, right;
    bool fl = false;

    // cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        string rev = v[i];
        reverse(rev.begin(), rev.end());
        // cout << v[i] << " " << rev << endl;

        if (v[i] == rev)
        {
            center.push_back(v[i]);
            fl = true;
            continue;
        }
        for (int j = i + 1; j < v.size(); j++)
        {
            string nw = v[j];
            reverse(nw.begin(), nw.end());

            // cout << v[i] << " " << nw << endl;

            if (v[i] == nw)
            {
                left = left + v[i];
                right = v[j] + right;
                fl = true;

                continue;
            }
        }
        if (fl)
        {
            continue;
        }
    }

    int mx = 0;
    int times = 0;
    string act;

    for (int i = 0; i < center.size(); i++)
    {
        int ct = count(center.begin(), center.end(), center[i]);
        int len = ct * center[i].length();
        if (len > mx)
        {
            mx = len;
            times = ct;
            act = center[i];
        }
    }

    cout << left.length() + times * act.length() + right.length() << endl;

    cout << left;
    for (int i = 0; i < times; i++)
    {
        cout << act;
    }
    cout << right;
    cout << endl;
}