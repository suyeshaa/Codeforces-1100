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
        int a[2 * n];
        vector<pair<int, int>> odd;
        vector<pair<int, int>> even;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even.push_back(make_pair(a[i], i + 1));
            }
            else
            {
                odd.push_back(make_pair(a[i], i + 1));
            }
        }

        if (even.size() % 2 == 0)
        {
            if (even.size() == 0 and odd.size() >= 4)
            {
                for (int i = 0; i < odd.size() - 3; i++)
                {
                    cout << odd[i].second << " " << odd[i + 1].second << endl;
                    i++;
                }
            }
            else
            {
                if (even.size() >= 4)
                {
                    for (int i = 0; i < even.size() - 3; i++)
                    {
                        cout << even[i].second << " " << even[i + 1].second << endl;
                        i++;
                    }
                }
                if (odd.size() > 0)
                {
                    for (int i = 0; i < odd.size() - 1; i++)
                    {
                        cout << odd[i].second << " " << odd[i + 1].second << endl;
                        i++;
                    }
                }
            }
        }
        else
        {
            if (even.size() >= 3)
            {
                for (int i = 0; i < even.size() - 2; i++)
                {
                    cout << even[i].second << " " << even[i + 1].second << endl;
                    i++;
                }
            }
            if (odd.size() >= 3)
            {
                for (int i = 0; i < odd.size() - 2; i++)
                {
                    cout << odd[i].second << " " << odd[i + 1].second << endl;
                    i++;
                }
            }
        }
    }
}