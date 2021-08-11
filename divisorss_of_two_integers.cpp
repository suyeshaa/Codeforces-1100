#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    int mx = *max_element(v.begin(), v.end());
    // cout << mx << endl;
    vector<int> vec;
    for (int i = 1; i <= mx; i++)
    {
        if (mx % i == 0)
        {
            vec.push_back(i);
        }
    }

    // for (auto x : vec)
    // {
    //     cout << x << endl;
    // }

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (vec[i] == v[j])
            {
                auto it = v.begin() + j;
                v.erase(it);
                // cout << v[i] << " " << i << endl;
                // cout << vec[i] << endl;
                break;
            }
        }
    }

    cout << mx << " " << *max_element(v.begin(), v.end());
}