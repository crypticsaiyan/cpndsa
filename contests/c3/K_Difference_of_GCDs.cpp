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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, n, a, b;
    cin >> t;
    int flag = 0;
    vector<long long> v;
    while (t--)
    {
        flag = 0;
        cin >> n >> a >> b;
        for (int i = 1; i <= n; i++)
        {
            // cout << "i: " << i << " and b = " << b << endl;
            if (b % i != 0)
            {
                if (a > (b - b % i))
                {
                    // cout << "flag changed" << endl;
                    flag = 1;
                    break;
                }
            }
            // cout << b - (b%i) << endl;
            v.push_back((b - (b % i)));
            // pv(i, n, v);
        }
        if (!flag)
        {
            py;
            pv(i, n, v);
        }
        else
        {
            pn;
        }
        v.erase(v.begin(), v.end());
    }
    return 0;
}