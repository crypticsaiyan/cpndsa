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
        long long arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        long long maxi = *max_element(arr, arr + n);
        long long ans = 0;
        // cout << "maxi" << maxi << endl;
        while (ans < n - 1)
        {
            if (arr[ans] + arr[ans + 1] > maxi)
                break;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}