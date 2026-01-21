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
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int arr[n][m];
        int max = 0;
        fo(i, n)
        {
            fo(j, m)
            {
                cin >> arr[i][j];
                if (arr[i][j] > max)
                    max = arr[i][j];
            }
        }
        int rowsx = 0;
        int rowsy = 0;
        fo(i, n)
        {
            fo(j, m)
            {
                if (arr[i][j] == max)
                {
                    rowsx++;
                    break;
                }
            }
        }
        fo(i, m)
        {
            fo(j, n)
            {
                if (arr[j][i] == max)
                {
                    rowsy++;
                    break;
                }
            }
        }
        // cout << "rows: " << rowsx << "col: "<< rowsy << endl;
        if (rowsx == rowsy)
        {
            cout << max-1 << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
    return 0;
}