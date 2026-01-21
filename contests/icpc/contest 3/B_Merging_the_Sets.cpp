#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (long long i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)             \
    for (auto &x : v)     \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl5
#define pa(i, n, arr)                 \
    for (long long i = 0; i < n; i++) \
    {                                 \
        cout << arr[i] << " ";        \
    }                                 \
    cout << endl
#define vi vector<long long>

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count[m + 1] = {0};
        vector<vector<int>> arr(m + 1);
        set<int> s;
        fo(i, n)
        {
            int l;
            cin >> l;
            while (l--)
            {
                int x;
                cin >> x;
                // cout << "x is: " << x << endl;
                if (s.find(x) == s.end())
                {
                    // cout << "not found " << x << endl;
                    arr[x].push_back(i + 1);
                    count[x]++;
                }
                s.emplace(x);
            }
            // cout << "set" << endl;
            // for (auto x : s)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
            s.clear();
        }
        set<int> oneset;
        fo(i, m + 1)
        {
            if (count[i] == 1)
            {
                oneset.emplace(arr[i][0]);
            }
        }
        // cout << "arr";
        // for (auto x : arr)
        // {
        //     for (auto y : x)
        //     {
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        // pa(i, m + 1, count);
        // cout << "oneset: ";
        // for (auto x : oneset)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        int flag = 0;
        int sum = 0;
        for (int i = 1; i <= m; i++)
        {
            if (count[i] < 1)
            {
                flag = 0;
                break;
            }
            if (count[i] >= 2)
            {
                if (oneset.find(i) == oneset.end())
                    sum++;
            }
        }
        if (sum >= 2)
        {
            flag = 1;
        };
        if (flag)
            py;
        else
            pn;
    }
    return 0;
}
