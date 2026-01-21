#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> x >> y;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int modx[n], mody[n];
        for (int j = 0; j < n; j++)
        {
            modx[j] = arr[j] % x;
            mody[j] = arr[j] % y;
        }

    }

    return 0;
}