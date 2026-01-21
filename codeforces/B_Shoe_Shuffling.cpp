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
    map<int, vector<int>> mp;
    vi arr(n);
    fo(i, n)
    {
      cin >> arr[i];
    }
    fo(i, n)
    {
      mp[arr[i]].push_back(i);
    }
    // for (auto x : mp)
    // {
    //   cout << x.first << ": ";
    //   pv(i, x.second);
    //   cout << endl;
    // }
    int flag = 0;
    for (auto x : mp)
    {
      if (x.second.size() == 1)
      {
        flag = 1;
        break;
      }
    }
    if (flag)
    {
      cout << "-1\n";
    }
    else
    {
      vi ans(n);
      for (auto x : mp)
      {
        vi v = x.second;
        ans[v[0]] = v[v.size()-1]+1;
        for (int i = 1; i < v.size(); i++)
        {
          ans[v[i]] = v[i-1]+1;
        }
        // pv(i, v);
      }
      pv(i, ans);
    }
  }
  return 0;
}
// 1 2 3 4 5
// 1 2 1 2 1

// 5 4 1 2 3