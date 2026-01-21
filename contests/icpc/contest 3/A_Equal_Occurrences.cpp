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
    cout << endl
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
        int n;
        cin >> n;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        int no[n+1] = {0};
        fo(i, n)
        {
            no[arr[i]]++;
        }
        // pv(no);
        int ansp = 0, ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = 0;
            fo(j, n+1)
            {
                if (no[j] >= i)
                {
                    ans += i;
                    // cout << "on j: " << j << endl;
                }
            }
            // cout << "ans is " << ans << endl;
            if (ansp < ans)
            {
                ansp = ans;
            }
        }
        cout << ansp << endl;
    }
    return 0;
}