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

// prime greater than or equal to n
int p(int n)
{
    int m = n - 1;
    int div = 0;
    while (div != 2)
    {
        div = 0;
        m++;
        for (int i = 1; i * i <= m; i++)
        {
            if (m % i == 0)
            {
                if (i * i == m)
                    div++;
                else
                    div += 2;
            }
        }
    }
    return m;
}

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
        int x = p(n + 1);
        cout << x * p(x+n) << endl;
    }
    return 0;
}