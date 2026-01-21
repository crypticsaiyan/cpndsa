#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, v)                       \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cout << v[i] << " ";           \
    }                                  \
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
    int a, b, n, l, h;
    cin >> a >> b;
    int gcd = __gcd(a, b);
    vi fact;
    for (int i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            fact.push_back(i);
            fact.push_back(gcd / i);
        }
    }
    sort(fact.begin(), fact.end());
    // pv(i, fact);
    cin >> n;
    while (n--)
    {
        int flag = 0;
        cin >> l >> h;
        for (int i = fact.size() - 1; i >= 0; i--)
        {
            if (fact[i] <= h && fact[i] >= l)
            {
                cout << fact[i] << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}