#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)         \
  for (auto &x : v)   \
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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, m;
  cin >> t;
  map<int, vector<int>> mpp;
  for (int i = 1; i <= t; i++)
  {
    cin >> m;
    int temp;
    fo(j, m)
    {
      cin >> temp;
      mpp[temp].push_back(i);
    }
  }
  for (auto &x : mpp)
  {
    cout << x.first << ": ";
    pv(x.second);
  }
  set<int> s;
  for (auto &x : mpp)
  {

    if (x.second.size() > 1)
    {
      for (auto &y : x.second)
      {
        s.emplace(y);
      }
    }
  }
  cout << s.size();
  return 0;
}