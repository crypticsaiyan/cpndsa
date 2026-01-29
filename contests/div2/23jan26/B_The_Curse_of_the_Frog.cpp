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
    int n, x, a, b, c;
    cin >> n >> x;
    int arr[n];
    int max_free = 0;
    int max_sum = 0;
    int max_count = 0;
    vector<int> max_1;
    fo(i, n)
    {
      cin >> a >> b >> c;
      max_free += a * (b - 1);
      max_1.push_back(a * b - c);
      max_sum += a * b - c;
    }
    sort(max_1.begin(), max_1.end());
    reverse(max_1.begin(), max_1.end());
    cout << "max free: " << max_free << endl;
    int ans = 0;
    if (x < max_free)
    {
      cout << "0\n";
    }
    else if (max_free + max_sum < 0)
    {
      cout << "-1\n";
    }
    else
    {
      ans = (x) / (max_free + max_sum);
      int rem = x%(max_free + max_sum);
      cout << ans << endl;
    }
  }
  return 0;
}