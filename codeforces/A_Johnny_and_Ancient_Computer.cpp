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
int isPower(int x)
{
  int base = 1;
  for (int i = 0; i <= 60; i++)
  {
    if (base == x)
      return i;
    base *= 2;
  }
  return -1;
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
    int a, b;
    cin >> a >> b;
    int x;
    if (lcm(a, b) == a)
    {
      x = a / b;
      if (isPower(x) != -1)
      {
        cout << ceil(isPower(x) / 3.0) << endl;
      }
      else
        cout << "-1" << endl;
    }
    else if (lcm(a, b) == b)
    {
      x = b / a;
      if (isPower(x) != -1)
      {
        cout << ceil(isPower(x) / 3.0) << endl;
      }
      else
        cout << "-1" << endl;
    }
    else
      cout << "-1" << endl;
  }
  return 0;
}