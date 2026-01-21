#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (long long i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)             \
    for (auto &x : v)     \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl5
#define pa(i, n, arr)           \
    for (long long i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }                           \
    cout << endl
#define vi vector<long long>

// string str; getline(cin, str);

void returnAns(long long ai, long long af, long long x, vector<pair<long long, long long>> &v)
{
    if (ai == x)
    {
        v = {{ai, ai}};
        return;
    }
    if (af == x)
    {
        v = {{af, af}};
        return;
    }
    if ((ai + af) % 2)
    {
        v = {{-1, -1}};
        return;
    }
    long long middle = ai + (af - ai) / 2;
    v.push_back({ai, af});
    if (x > middle)
    {
        returnAns(middle, af, x, v);
    }
    else if (x < middle)
    {
        returnAns(ai, middle, x, v);
    }
    else
        return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b, x, y;
    cin >> a >> b >> x >> y;
    vector<pair<long long, long long>> xarr, yarr;
    returnAns(0, a, x, xarr);
    returnAns(0, b, y, yarr);
    vector<pair<pair<long long, long long>, pair<long long, long long>>> ans(max(xarr.size(), yarr.size()));
    long long l = xarr.size() - 1;
    long long s = yarr.size() - 1;
    // for (auto &x : xarr)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    // for (auto &x : yarr)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    for (long long i = ans.size() - 1; i >= 0; i--)
    {
        if (l >= 0 && s >= 0)
        {
            ans[i].first = {xarr[l].first, yarr[s].first};
            ans[i].second = {xarr[l].second, yarr[s].second};
        }
        else if (l < 0)
        {
            ans[i].first = {0, yarr[s].first};
            ans[i].second = {0, yarr[s].second};
        }
        else if (s < 0)
        {
            ans[i].first = {xarr[l].first, yarr[0].second};
            ans[i].second = {xarr[l].second, yarr[0].second};
        }
        l--;
        s--;
    }
    if (xarr[0].first == -1 || yarr[0].first == -1)
    {
        cout << "-1";
    }
    else if (a == x && b == y){
        cout << "0";
    }
    else
    {
        cout << ans.size() << endl;
        for (auto &x : ans)
        {
            cout << x.first.first << " " << x.first.second << " " << x.second.first << " " << x.second.second << endl;
        }
    }
    return 0;
}