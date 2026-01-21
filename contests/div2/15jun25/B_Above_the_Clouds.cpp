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
    // cout << int('a' - 97);
    int t, n;
    cin >> t;
    while (t--)
    {
        int hash[26] = {0};
        cin >> n;
        string s;
        cin >> s;
        fo(i, n)
        {
            hash[int(s[i] - 97)]++;
        }
        int flag = 0;
        // pa(i, 26, hash);
        fo(i, 26)
        {
            if (hash[i] > 2)
            {
                flag = 1;
                // cout << "this is flag" << endl;
                break;
            }
            else if (hash[i] == 2)
            {
                if (s[0] == char(i + 97) && s[n - 1] == char(i + 97))
                {
                    flag = 0;
                    // cout << s[0]<< " "<< char(i+97)<< " fajdlfald"<< endl;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    // cout << char(97);
    return 0;
}
