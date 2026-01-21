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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    fo(i, q)
    {
      int q;
      cin >> q;
      int k = 0;
      int ans = 0;
      int flag = 0;
      fo(i, n)
      {
        if (s[i] == 'B')
          flag = 1;
      }
      if (flag)
      {
        while (q != 0)
        {
          if (s[k] == 'A')
            q--;
          else
            q = q / 2;
          ans++;
          k++;
          if (k == n)
            k = 0;
        }
      }
      else{
        ans = q;
      }
      cout << ans << endl;
    }
  }
  return 0;
}