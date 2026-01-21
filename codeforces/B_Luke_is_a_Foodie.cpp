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
    int n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v;
    ll temp;
    fo(i, n)
    {
      cin >> temp;
      v.push_back({temp - x, temp + x});
    }
    // for(auto k: v){
    //   cout << k.first << " " << k.second << ", ";
    // }
    pair<ll, ll> common = v[0];
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
      ll max_starting = max(v[i].first, common.first);
      ll min_ending = min(v[i].second, common.second);
      common = {max_starting, min_ending};
      if (max_starting > min_ending)
      {
        ans++;
        common = v[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}