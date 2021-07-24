#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n], sum = 0, one = 0, tw = 0, thr = 0, fo = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            one++;
        }
        else if (a[i] == 2)
        {
            tw++;
        }
        else if (a[i] == 3)
        {
            thr++;
        }
        else
        {
            fo++;
        }
    }

    vector<int> v;

    sum = fo;
    if (tw % 2 == 0)
    {
        sum += tw / 2;
    }
    else
    {
        sum += (tw - 1) / 2;
        v.push_back(2);
    }

    if (thr < one)
    {
        sum += thr;
        one = one - thr;
    }
    else
    {
        sum += one;
        thr = thr - one;
        one = 0;
        for (int i = 0; i < thr; i++)
        {
            v.push_back(3);
        }
    }

    if (one % 4 == 0)
    {
        sum += one / 4;
    }
    else
    {
        sum += one / 4;
        // cout << sum % 4;
        for (int i = 0; i < one % 4; i++)
        {
            v.push_back(1);
        }
    }

    sort(v.begin(), v.end());
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }

    int suml = 0, cnt = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[0] == 1)
        {
            suml += v[i];
            // cout << suml << endl;
            if (suml > 4)
            {
                cnt++;
                suml = v[i];
                // cout << cnt << " " << a[i];
                // i--;
            }
        }
        else
        {
            cnt = v.size();
        }
        // i++;
    }

    // cout << sum << cnt << endl;

    if (v.size() != 0)
    {
        cout << sum + cnt << endl;
    }
    else
    {
        cout << sum << endl;
    }
}