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
    int w, h;
    cin >> w >> h;
    int k;
    set<int> a, b, c, d;
    int x;
    cin >> k;
    while (k--)
    {
      cin >> x;
      a.insert(x);
    }
    cin >> k;
    while (k--)
    {
      cin >> x;
      b.insert(x);
    }
    cin >> k;
    while (k--)
    {
      cin >> x;
      c.insert(x);
    }
    cin >> k;
    while (k--)
    {
      cin >> x;
      d.insert(x);
    }
    auto firsta = *a.begin();
    auto lasta = *a.rbegin();
    auto firstb = *b.begin();
    auto lastb = *b.rbegin();
    auto firstc = *c.begin();
    auto lastc = *c.rbegin();
    auto firstd = *d.begin();
    auto lastd = *d.rbegin();
    cout << max((lasta - firsta) * max(lastc, lastd), last)
  }
  return 0;
}