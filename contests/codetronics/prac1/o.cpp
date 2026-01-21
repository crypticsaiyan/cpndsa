#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        long long arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            // arr[j] = s * pow(2, j);
        }
        // for (int j = 0; j < n; j++)
        // {
        //     cout << arr[j] << " ";
        // }
        // cout << endl;
        int counter[n] = {0};
        for (int j = 1; j < n; j++)
        {
            if (2*arr[j] > arr[j - 1])
                counter[j] = 1;
        }
        // for (int j = 0; j < n; j++)
        // {
        //     cout << counter[j] << " ";
        // }
        // cout << endl;
        int count = 0, ans = 0;
        for (int j = 1; j < n; j++)
        {
            if (counter[j] == 1 && counter[j - 1] != 0)
            {
                counter[j] += counter[j - 1];
                counter[j - 1] = 0;
            }
        }
        // for (int j = 0; j < n; j++)
        // {
        //     cout << counter[j] << " ";
        // }
        // cout << endl;
        for (int j = 1; j < n; j++)
        {
            if (counter[j] != 0 && counter[j] - k + 1 > 0)
            {
                ans += counter[j] - k + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}