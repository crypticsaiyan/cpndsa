#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, q;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> q;
        long long arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (l == r)
            {
                cout << "NO" << endl;
            }
            else
            {
                long long sum = 0;
                for (int j = l - 1; j < r; j++)
                {
                    sum += arr[j];
                }
                // cout << "sum: " << sum << " " << "cond: " << 2 * (r - l + 1)-1;
                if (sum < 2 * (r - l + 1)-1)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }

    return 0;
}