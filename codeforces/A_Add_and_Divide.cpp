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
    int a, b;
    cin >> a >> b;
    int ans = INT_MAX;
    fo(i, 32)
    {
      int op = i;
      int x = b + i;
      int tmp = a;
      if (x == 1)
      {
        x++;
        op++;
      }
      while (tmp > 0)
      {
        tmp /= x;
        op++;
        // cout << "a is" << a << endl;
      }
      ans = min(op, ans);
    }
    cout << ans << endl;
  }
  return 0;
}