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
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n * (n - 1)) % 4 != 0)
        {
            cout << "NO";
        }
        else
        {
            py;
            int se = 0, so = 0;
            for (int i = 1; i <= n / 2; i++)
            {
                cout << 2 * i << " ";
                se += 2 * i;
            }
            for (int i = 0; i < n / 2 - 1; i++)
            {
                cout << 2 * i + 1 << " ";
                so += 2 * i + 1;
            }
            cout << se - so;
        }
        cout << endl;
    }
    return 0;
}