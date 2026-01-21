#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, v)                       \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cout << v[i] << " ";           \
    }                                  \
    cout << endl
#define pa(i, n, arr)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }                           \
    cout << endl
#define vi vector<int>

// string str; getline(cin, str);
void solve()
{
    ll w, h, a, b, x1, y1, x2, y2;
    cin >> w >> h >> a >> b;
    cin >> x1 >> y1 >> x2 >> y2;
    ll diffx = abs(x1 - x2);
    ll diffy = abs(y1 - y2);
    if (diffx < a)
    {
        if (diffy % b == 0)
            py;
        else
            pn;
    }
    else if (diffy < b)
    {
        if (diffx % a == 0)
            py;
        else
            pn;
    }
    else if (diffx % a == 0 || diffy % b == 0)
        py;
    else
        pn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // cout << 6%42;
    return 0;
}