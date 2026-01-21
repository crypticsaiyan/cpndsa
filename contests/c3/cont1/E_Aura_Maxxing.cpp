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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    fo(i, n)
    {
        cin >> a[i];
    }
    fo(i, m)
    {
        cin >> b[i];
    }
    int s = m + n;
    int final[m + n];
    int flag[m + n];
    // flag 0 -> a; flag 1 -> b;
    int k = 0, p = 0, r = 0;
    while (s--)
    {
        if (a[k] > b[p] && p != m)
        {
            final[r] = b[p];
            flag[r] = 1;
            p++;
        }
        else if (k != n)
        {
            final[r] = a[k];
            flag[r] = 0;
            k++;
        }
        r++;
    }
    // pa(i, m + n, final);
    // pa(i, m + n, flag);
    int i = 0;
    while (flag[i] != 1)
    {
        i++;
    }
    int x = final[i], d_right = 0;
    i=0;
    int j;
    for (; i < m + n; i++)
    {
        if (flag[i] == 0)
            d_right = max(d_right, abs(final[i] - x));
        else
        {
            x = final[i];
            j = i;
        }
    }
    // cout << d_right << endl;
    // cout << j << endl;
    x = final[j];
    int d_left = 0;
    i = m+n-1;
    for (; i >= 0; i--)
    {
        if (flag[i] == 0)
            d_left = max(d_left, abs(x - final[i]));
        else
            x = final[i];
    }
    // cout << d_left << endl;
    cout << min(d_right, d_left);
    return 0;
}