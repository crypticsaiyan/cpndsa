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
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    fo(i, n)
    {
      cin >> a[i];
    }
    fo(i, n)
    {
      cin >> b[i];
    }
    int ans = 0;
    int tempsum = 0;
    int maxi = 0;
    for (int i = 0; i < min(k, n); i++)
    {
      tempsum += a[i];
      maxi = max(maxi, b[i]);
      ans = max(ans, tempsum + (k - i - 1) * maxi);
      // cout << "for test case: " << t << " ans: " << ans << endl;
    }
    cout << ans << endl;
  }
  return 0;
}