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
        long long min = *min_element(arr, arr + n);
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != min)
            {
                count++;
            }
        }
        cout << min * n + count << endl;
    }
    return 0;
}