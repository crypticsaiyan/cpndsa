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
long long ceil_division(long long a, long long b)
{
  return (a + b - 1) / b;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, k;
    cin >> x >> y >> k;
    // i need k*y sticks for k coal
    // initial sticks = 1, more needed -> k*y + k-1
    // i get x-1 more sticks from stick trade
    // first trade sticks till i get atleast k sticks
    int trades = 0;
    trades += ceil(double(k - 1) / (x - 1));
    // cout << "sticktrades: " << trades << endl;
    // sticks left
    int left = 1 + trades * (x - 1) - k;
    // cout << "sticksleft: " << left << endl;
    int sticksneededforcoal = k * y;
    if (left > 0)
    {
      sticksneededforcoal -= left;
    }
    // cout << sticksneededforcoal << endl;
    trades += ceil_division((sticksneededforcoal),(x - 1));
    // cout << "tr:  " << trades << endl;
    trades += k;
    cout << trades << endl;
  }
  return 0;
}