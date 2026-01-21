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

int rem = 0;

int foo(int k, int a, int x)
{
    // while (k >= a)
    // {
    //     ans++;
    //     k -= x;
    // }
    if (k < a)
    {
        rem = k;
        return 0;
    }
    else
    {
        int ans;
        ans = (k - a) / x + 1;
        rem = k - x * ans;
        return ans;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, k, a, b, x, y;
    cin >> t;
    while (t--)
    {
        cin >> k >> a >> b >> x >> y;
        int mini = min(x, y);
        int maxi = max(x, y);
        int s, t;
        if (mini == x)
        {
            s = a;
            t = b;
        }
        else
        {
            s = b;
            t = a;
        }
        cout << foo(k, s, mini) + foo(rem, t, maxi) << endl;
        rem = 0;
    }
    return 0;
}