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
        vi even;
        vi odd;
        int x;
        fo(i, n)
        {
            cin >> x;
            if (x % 2)
            {
                odd.push_back(x);
            }
            else
            {
                even.push_back(x);
            }
        }
        // pv(i, odd.size(), odd);
        // pv(i, even.size(), even);
        // conditions : odd.size > even.size
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        int maxev = 0, maxodd = 0;
        if (even.size() > 0)
            maxev = even[even.size() - 1];
        if (odd.size() > 0)
            maxodd = odd[odd.size() - 1];

        // cout << maxev << " and " << maxodd << endl;
        long long ans = 0;
        long long evensum = 0, oddsum = 0;
        fo(i, even.size())
        {
            evensum += even[i];
        }
        fo(i, odd.size())
        {
            oddsum += odd[i];
        }
        long long l = 0;
        if (odd.size() > even.size())
        {
            reverse(odd.begin(), odd.end());
            // pv(i, odd.size(), odd);
            for (int i = 1; i <= even.size(); i++)
            {
                l += odd[i];
            }
            // cout << l << endl;
        }
        if (even.size() == 0)
        {
            cout << maxodd << endl;
            continue;
        }
        else if (odd.size() == 0)
        {
            cout << maxev << endl;
            continue;
        }
        else if (odd.size() > even.size())
        {
            reverse(odd.begin(), odd.end());
            // cout << "cond";
            ans = odd[odd.size() - 1] + l + evensum - even.size();
        }
        else
        {
            ans = oddsum + evensum - even.size() + 1;
        }
        cout << ans << endl;
    }
    return 0;
}