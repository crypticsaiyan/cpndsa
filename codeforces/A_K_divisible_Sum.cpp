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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n >= k)
        {
            cout << 1 + int(ceil(double(n % k) / n)) << endl;
        }
        else
        {
            cout << int(ceil(double(k) / n)) << endl;
        }
    }
    cout.tie(NULL);
    return 0;
}