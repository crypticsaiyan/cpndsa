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
    long long t, n, q;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        long long steps[n];
        fo(i, n)
        {
            cin >> steps[i];
        }
        long long maxleg[n];
        maxleg[0] = steps[0];
        for (int i = 1; i < n; i++)
        {
            maxleg[i] = max(steps[i], maxleg[i - 1]);
        }

        // pa(i, n, maxleg);

        long long sum[n] = {0};
        sum[0] = steps[0];
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + steps[i];
        }
        // pa(i, n, sum);
        long long query = 0;

        while (q--)
        {
            cin >> query;
            if (query == 0)
                cout << "0 ";
            else if (query > maxleg[n-1])
            {
                cout << sum[n - 1] << " ";
            }
            else
            {
                long long ind = upper_bound(maxleg, maxleg + n, query) - maxleg;
                // cout << "index: " << ind << endl;
                if (ind == 0)
                {
                    cout << "0 ";
                }
                else if (ind <= n - 1)
                    cout << sum[ind - 1] << " ";
                else
                {
                    cout << sum[n - 1] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}