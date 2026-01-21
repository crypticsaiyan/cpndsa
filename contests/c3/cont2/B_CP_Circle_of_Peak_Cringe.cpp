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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int r[n];
        fo(i, n)
        {
            cin >> r[i];
        }
        if (n % 2)
        {
            pn;
        }
        else
        {
            sort(r, r + n);
            int dupl = 0, flag = 0;
            fo(i, n - 1)
            {
                if (r[i] == r[i + 1])
                {
                    dupl++;
                }
                else
                {
                    dupl = 0;
                }
                if (dupl > (n / 2 - 1))
                {
                    pn;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                for (int i = 1; i < n - 1; i += 2)
                {
                    if (r[i - 1] > r[i])
                    {
                        int k = i + 1;
                        if (r[i + 1] <= r[i])
                        {
                            while (r[k] == r[i])
                            {
                                k++;
                            }
                            swap(r[i], r[k]);
                        }
                    }
                    else if (r[i - 1] <= r[i])
                    {
                        int k = i + 1;
                        if (r[i + 1] >= r[i])
                        {
                            while (r[k] == r[i])
                            {
                                k++;
                            }
                            swap(r[i], r[k]);
                        }
                    }
                    // cout << "i=" << i << ") ";
                    // pa(i, n, r);
                }
                int ff = 0;
                for (int i = 1; i < n - 1; i++)
                {
                    if (i % 2)
                    {
                        if (r[i - 1] >= r[i] || r[i + 1] >= r[i])
                        {
                            ff = 1;
                            break;
                        }
                    }
                    else
                    {
                        if (r[i - 1] <= r[i] || r[i + 1] <= r[i])
                        {
                            ff = 1;
                            break;
                        }
                    }
                }
                if (ff)
                {
                    pn;
                }
                else
                {
                    py;
                    pa(i, n, r);
                }
            }
        }
    }
    return 0;
}