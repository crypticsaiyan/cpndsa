#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        long long a[n], b[n], minmoney[n] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        minmoney[n - 1] = a[n - 1];
        long long mini = min(a[n - 1], b[n - 1]);
        for (int j = n - 2; j >= 0; j--)
        {
            minmoney[j] = a[j] + mini;
            mini += min(a[j], b[j]);
        }
        long long ans = *min_element(minmoney, minmoney+m);
        cout << ans << endl;
    }
    return 0;
}
