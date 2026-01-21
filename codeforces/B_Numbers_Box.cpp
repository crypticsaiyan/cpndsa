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
  int n, m;
  while (t--)
  {
    cin >> n >> m;
    int neg = 0;
    int mini = 100;
    int sum = 0;
    fo(i, n)
    {
      fo(j, m)
      {
        int x;
        cin >> x;
        if (x < 0)
        {
          neg++;
        }
        mini = min(mini, abs(x));
        sum += abs(x);
      }
    }
    if (neg % 2)
    {
      cout << sum - 2 * mini << endl;
    }
    else
      cout << sum << endl;
  }
  return 0;
}