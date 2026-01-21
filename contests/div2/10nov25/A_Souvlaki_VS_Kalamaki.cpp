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
    int n;
    cin >> n;
    vi v(n);
    fo(i, n)
    {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
      if (2 * i + 2 >= n)
        break;
      if (v[2 * i + 1] != v[2 * i + 2])
      {
        flag = 0;
        break;
      }
    }
    if (flag)
      py;
    else
      pn;
  }
  return 0;
}