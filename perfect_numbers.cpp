#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll digitSum(ll num)
{
    ll sum = 0;
    ll d = 0;
    while (num > 0)
    {
        d = num % 10;
        num = num / 10;
        sum += d;
    }

    return sum;
}
int main()
{
    ll k;
    cin >> k;
    ll cnt = 0;
    // cout << digitSum(19);
    int i = 19;

    while (true)
    {
        ll sum = digitSum(i);
        // cout << sum << endl;
        if (sum == 10)
        {
            cnt++;
        }

        if (cnt == k)
        {
            cout << i << endl;
            break;
        }
        i++;
    }
}