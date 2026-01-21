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
        if (n <= 4)
        {
            cout << "-1" << endl;
        }
        else
        {
            // cout << "2 4 5 3 1" << endl;
            for (int i = 1; i <= n / 2; i++)
            {
                if (2 * i != 4)
                {
                    cout << 2 * i << " ";
                }
            }

            cout << "4 5 ";
            for (int i = 1; i <= n - n / 2; i++)
            {
                if (2 * i - 1 != 5)
                {
                    cout << 2 * i - 1 << " ";
                }
            }

            cout << endl;
        }
    }
    return 0;
}