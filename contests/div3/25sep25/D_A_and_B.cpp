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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int tl = 0, tr = 0, tor = 0, tol = 0;
        int left = 0, right = n - 1;
        // case 1: a in middle
        int aans = 0;
        while (left < right)
        {
            while (s[left] != 'a')
            {
                left++;
            }
            while (s[right] != 'a')
            {
                right--;
            }
            while (s[left] != 'b')
            {
                tl++;
                left++;
            }
            while (s[right] != 'b')
            {
                tr++;
                right--;
            }
            while (s[left] != 'a')
            {
                tol++;
                left++;
            }
            while (s[right] != 'a')
            {
                tor++;
                right--;
            }
        }
    }
    return 0;
}