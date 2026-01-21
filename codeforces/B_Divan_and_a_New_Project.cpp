#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, v)                     \
  for (int i = 0; i < v.size(); i++) \
  {                                  \
    cout << v[i] << " ";             \
  }                                  \
  cout << endl
#define pa(i, n, arr)         \
  for (int i = 0; i < n; i++) \
  {                           \
    cout << arr[i] << " ";    \
  }                           \
  cout << endl
#define vi vector<int>
#define int long long

// string str; getline(cin, str);

bool compar(pair<int, int> a, pair<int, int> b)
{
  return a.second > b.second;
}

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
    vector<pair<int, int>> mp;
    fo(i, n)
    {
      int x;
      cin >> x;
      mp.push_back({i + 1, x});
    }
    sort(mp.begin(), mp.end(), compar);
    // for (auto x : mp)
    // {
    //   cout << x.second << ": " << x.first << " ";
    // }
    // cout << endl;
    int ans[n + 1];
    int k = 1;
    ans[0] = 0;
    int dist = 0;
    fo(i, n)
    {
      ans[mp[i].first] = k;
      dist += mp[i].second * abs(k);
      if (k < 0)
        k = -k + 1;
      else
        k = -1 * k;
    }
    cout << 2 * dist << endl;
    pa(i, n + 1, ans);
  }
  return 0;
}