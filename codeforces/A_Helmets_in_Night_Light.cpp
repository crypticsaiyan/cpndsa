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
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, p;
    cin >> n >> p;
    vector<pair<ll, ll>> v;
    vi a(n), b(n);
    fo(i, n)
    {
      cin >> a[i];
    }
    fo(i, n)
    {
      cin >> b[i];
    }
    fo(i, n)
    {
      v.push_back({b[i], a[i]});
    }
    sort(v.begin(), v.end());
    ll ans = p * 1LL;
    ll rem = n - 1;
    for (auto x : v)
    {
      if (x.first < p)
      {
        if (rem >= x.second)
        {
          ans += x.second * x.first * 1LL;
          rem -= x.second;
        }
        else
        {
          ans += rem * x.first * 1LL;
          break;
        }
      }
      else
      {
        ans += rem * p * 1LL;
        break;
      }
    }
    cout << ans << endl;
  }
  int x = 132;
  int y = 32;
  cout << "jfadsjdfakjfldasjdfslk" << endl;
  cout << sizeof(1LL * x * y);
  cout << sizeof(y * x * 1LL);
  return 0;
}