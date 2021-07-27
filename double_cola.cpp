#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;

    ll act = n;

    n = n - 5;
    int k = 2;

    while (n > 5 * k)
    {
        n = n - 5 * k;
        k = k * 2;
    }

    // cout << n << " " << k;
    ll idx = 0;

    while (n > k)
    {
        n = n - k;
        idx++;
    }
    idx = idx + 1;

    if (act <= 5)
    {
        idx = act;
    }

    switch (idx)
    {
    case 1:
        cout << "Sheldon" << endl;
        break;
    case 2:
        cout << "Leonard" << endl;
        break;
    case 3:
        cout << "Penny" << endl;
        break;
    case 4:
        cout << "Rajesh" << endl;
        break;
    case 5:
        cout << "Howard" << endl;
    }
}