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
    char c;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        if (c == 'g')
        {
            cout << 0 << endl;
        }
        else
        {
            int g_next = 2*n, ans = 0;
            for (int i = 2 * n - 1; i >= 0; i--)
            {
                if(s[i]=='g'){
                    g_next = i;
                }
                if(s[i] == c){
                    ans = max(ans, g_next - i);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}