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
    int n, c, d;
    cin >> n >> c >> d;
    multiset<int> s;
    int mini = INT_MAX;
    fo(i, n*n)
    {
      int x;
      cin >> x;
      mini = min(x, mini);
      s.emplace(x);
    }
    int k = mini;
    int flag = 1;
    // for (auto t : s)
    // {
    //   cout << t << " ";
    // }
    // cout << endl;
    for (int j = 0; j < n; j++)
    {
      k = mini + j * d;
      for (int i = 0; i < n; i++)
      {
        if (s.find(k) == s.end())
        {
          // cout << "could not find " << k << endl;
          flag = 0;
          break;
        }
        else
        {
          s.erase(s.find(k));
        }
        k += c;
      }
      if (!flag)
        break;
    }
    if (flag)
      py;
    else
      pn;
  }
  return 0;
}