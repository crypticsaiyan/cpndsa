#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, n, v)             \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << v[i] << " ";    \
    }                           \
    cout << endl
#define pa(i, n, arr)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }                           \
    cout << endl
#define vi vector<int>

// string str; getline(cin, str);

int maxx(vector<int> v)
{
    int len = size(v);
    int ans = 0, temp;
    fo(i, len)
    {
        if (v[i] != v[len - 1 - i])
        {
            temp = max(v[i], v[len - i - 1]) - min(v[i], v[len - i - 1]);
            ans = __gcd(ans, temp);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vi v;
        fo(i, n)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        cout << maxx(v) << endl;
    }
    return 0;
}