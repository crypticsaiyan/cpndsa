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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // n even -> 8 = 5 2 1 --> n-3 2 1
        // n odd --> 9 = 5 3 1, 13 --> 7 5 1 -> (n-1)/2 +1 (n-1)/2 -1 1
        if (!(n % 2))
        {
            cout << n - 3 << " " << "2 1" << endl;
        }
        else
        {
            if (((n - 1) / 2)%2 == 0)
                cout << (n - 1) / 2 + 1 << " " << (n - 1) / 2 - 1 << " 1" << endl;
            else
                cout << (n - 1) / 2 -2<< " " << (n - 1) / 2 + 2 << " 1" << endl;
        }
    }
    return 0;
}