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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi p(n + 1, 0);
    p[0] = 0;
    for (int i = 1; i <= n; i++)
    {
      p[i] += p[i - 1] + (s[i-1] == 'B');
    }
    // pv(i, p);
    int ans = INT_MAX;
    for (int i = k; i <= n; i++)
    {
      ans = min(ans, k - (p[i] - p[i - k]));
    }
    cout << ans << endl;
  }
  return 0;
}