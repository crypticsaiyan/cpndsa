#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, q;
    cin >> n >> m >> q;
    string sn;
    cin >> sn;
    string sm;
    cin >> sm;
    if (m > n)
    {
        for (int i = 0; i < q; i++)
        {
            cout << "0" << endl;
        }
    }
    else
    {
        int left[n] = {0};
        int right[n] = {0};
        for (int i = 0; i < n - m + 1; i++)
        {
            string subs = sn.substr(i, m);
            // cout << subs << endl;

            // cout << subs << endl;
            if (subs == sm)
            {
                for (int j = i + 1; j <= n - 1; j++)
                {
                    left[j]++;
                }
            }
        }
        for (int i = 0; i < n - m + 1; i++)
        {
            string subs = sn.substr(i, m);

            if (subs == sm)
            {
                for (int j = i +m - 1; j <= n - 1; j++)
                {
                    right[j]++;
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << left[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << right[i] << " ";
        // }
        // cout << endl;

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (r - l + 1 < m)
                cout << "0" << endl;
            else
            {
                cout << right[r - 1] - left[l - 1] << endl;
            }
        }
    }
    return 0;
}