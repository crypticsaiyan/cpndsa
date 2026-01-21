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
    vector<pair<int, int>> v;
    fo(i, n)
    {
      int x;
      cin >> x;
      v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    vi pre(n);
    pre[0] = v[0].first;
    for (int i = 1; i < n; i++)
    {
      pre[i] = pre[i - 1] + v[i].first;
    }
    int ans[n];
    fo(i, n)
    {
      int x = lower_bound(pre.begin(), pre.end(), v[i].first) - pre.begin();
      cout << "x is " << x << endl;
      ans[v[i].second] = n - 1 - x;
    }
    for (auto x : v)
    {
      cout << x.first << ":" << x.second << " ";
    }
    cout << endl;
    pa(i, n, ans);
  }
  return 0;
}