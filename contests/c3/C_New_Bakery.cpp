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

long long sn(long long n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        if (b > a)
        {
            if ((b - a + 1) <= n)
                cout << sn(b) - sn(a - 1) + (n - (b - a + 1)) * a << endl;
            else
            {
                cout << sn(b) - sn(b - n) << endl;
            }
        }
        else
            cout << n * a << endl;
    }
    return 0;
}