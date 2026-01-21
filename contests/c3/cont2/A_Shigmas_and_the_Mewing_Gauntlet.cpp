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
    int t, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        if (x == 0 && y != 0)
        {
            if ((n - 1) % y == 0)
            {
                int k = 1;
                int m = y;
                for (int i = 2; i <= n; i++)
                {
                    if (y == 0)
                    {
                        k = i;
                        y = m;
                    }
                    cout << k << " ";
                    y--;
                }
            }
            else
            {
                cout << "-1";
            }
        }
        else if (y == 0 && x != 0)
        {
            if ((n - 1) % x == 0)
            {
                int k = 1;
                int m = x;
                for (int i = 2; i <= n; i++)
                {
                    if (x == 0)
                    {
                        k = i;
                        x = m;
                    }
                    cout << k << " ";
                    x--;
                }
            }
            else
            {
                cout << "-1";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}