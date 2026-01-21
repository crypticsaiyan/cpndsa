#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)         \
  for (auto x : v)    \
  {                   \
    cout << x << " "; \
  }                   \
  cout << endl
#define pa(i, n, arr)         \
  for (int i = 0; i < n; i++) \
  {                           \
    cout << arr[i] << " ";    \
  }                           \
  cout << endl
#define vi vector<int>

// string str; getline(cin, str);

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a;
    cin >> b;
    string x, y;
    if (a.size() > b.size())
    {
      x = b;
      y = a;
    }
    else
    {
      x = a;
      y = b;
    }
    int ans = 0;
    fo(i, x.size())
    {
      for (int j = 1; j <= x.size() - i; j++)
      {
        string subs = x.substr(i, j);
        // cout << subs << endl;
        fo(k, y.size())
        {
          for (int c = 1; c <= y.size() - k; c++)
          {
            string subs2 = y.substr(k, c);
            if (subs == subs2)
            {
              ans = max(ans, static_cast<int>(subs.length()));
            }
          }
        }
      }
    }
    cout << a.size() + b.size() - 2 * ans << endl;
  }
  return 0;
}