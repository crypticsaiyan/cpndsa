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
    int t, n, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int mini = arr[0];
        int maxi = arr[n - 1];
        if (s <= mini)
        {
            cout << maxi - s;
        }
        else if (s >= maxi)
        {
            cout << s - mini;
        }
        else
        {
            // 1  [8] 9 10 --> 4 max - min + 1 + s -min -2
            cout << min(maxi - s, s - mini)+ maxi - mini;
        }
        cout << endl;
    }
    return 0;
}