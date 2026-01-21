#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long prefix[n - 1];
        for (int j = 0; j < n - 1; j++)
        {
            cin >> prefix[j];
        }
        // for (int j = 0; j < n - 1; j++)
        // {
        //     cout << prefix[j] << " ";
        // }
        // cout << endl;

        long long num[n - 1];
        num[0] = prefix[0];
        for (int j = 1; j < n - 1; j++)
        {
            num[j] = prefix[j] - prefix[j - 1];
        }
        // for (int j = 0; j < n - 1; j++)
        // {
        //     cout << num[j] << " ";
        // }
        // cout << endl;
        long long one_to_n[n]={0};
        long long large = 0;
        // index 0 -> freq of 1
        // index 1 -> freq of 2
        // index i -> freq of i+1
        // index n-1 -> freq of n
        for (int j = 0; j < n - 1; j++)
        {
            if (num[j] <= n)
            {
                one_to_n[num[j] - 1]++;
            }
            else
            {
                large = num[j];
            }
        }
        long long c0 = 0, c1 = 0, sum = 0, twofreq = 0;
        for (int j = 0; j < n; j++)
        {
            if (one_to_n[j] == 0)
            {
                c0++;
                sum += j + 1;
            }
            else if (one_to_n[j] == 1)
            {
                c1++;
            }
            else if (one_to_n[j] == 2)
            {
                twofreq = j + 1;
            }
        }
        // for (int j = 0; j < n; j++)
        // {
        //     cout << one_to_n[j] << " ";
        // }
        // cout << endl;
        if (c0 == 1 && c1 == n - 1)
            cout << "YES" << endl;

        else if (c0 == 2 && c1 == n - 2)
        {
            if (sum == large)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (c0 == 2 && c1 == n - 3)
        {
            if (sum == twofreq)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}