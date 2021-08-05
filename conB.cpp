#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        // vector<int> a(n);
        // vector<int> b(n);
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> b[i];
        // }

        ll cnt = 0;

        for (int i = 0; i < n; i++)
        {

            // if (b[i] == '1')
            // {
            //     if (a[i] == '0')
            //     {
            //         cnt++;
            //         a[i] = '2';
            //         continue;
            //     }
            //     if (i == 0)
            //     {
            //         if (a[i + 1] == '1')
            //         {
            //             cnt++;
            //             a[i + 1] = '2';
            //         }
            //     }
            //     else if (i == n - 1)
            //     {
            //         if (a[i - 1] == '1')
            //         {
            //             cnt++;
            //             a[i - 1] = '2';
            //         }
            //     }
            //     else
            //     {
            //         if (a[i - 1] == '1')
            //         {
            //             cnt++;
            //             a[i - 1] = '2';
            //         }
            //         else if (a[i + 1] == '1')
            //         {
            //             cnt++;
            //             a[i + 1] = '2';
            //         }
            //     }
            // }
            if (a[i] == '0' and b[i] == '1')
            {
                cnt++;
                a[i] = '2';
            }
            else if (i == 0)
            {
                if ((b[i] == '1' and a[i + 1] == '1'))
                {
                    cnt++;
                    a[i + 1] = '2';
                }
            }
            else if (i + 1 < n)
            {
                if ((b[i] == '1' and a[i - 1] == '1'))
                {
                    cnt++;
                    a[i - 1] = '2';
                }
            }
            else
            {
                if (b[i] == '1')
                {
                    if (a[i - 1] == '1')
                    {
                        cnt++;
                        a[i - 1] = '2';
                    }
                    else if (a[i + 1] == '1')
                    {
                        cnt++;
                        a[i + 1] = '2';
                    }
                }
            }
        }

        cout << cnt << endl;
    }
}