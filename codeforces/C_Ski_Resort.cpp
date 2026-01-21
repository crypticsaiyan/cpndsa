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
  ll t, n, k, m;
  cin >> t;
  while (t--)
  {
    cin >> n >> k >> m;
    ll temp;
    ll number = 0;
    vi numberVector;
    fo(i, n)
    {
      cin >> temp;
      if (i == n - 1)
      {
        if (temp <= m)
        {
          number++;
          numberVector.push_back(number);
        }
      }
      if (temp <= m)
      {
        number++;
      }
      else
      {
        numberVector.push_back(number);
        number = 0;
      }
    }
    ll ans = 0;
    for (auto &x : numberVector)
    {
      // cout << x << " ";
      if (x >= k)
        ans += ((x - k + 1) * (x - k + 2)) / 2;
    }
    cout << ans << endl;
  }
  return 0;
}