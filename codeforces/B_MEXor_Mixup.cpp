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

int calcxor(int n)
{
  if (n % 4 == 0)
  {
    return n;
  }
  else if (n % 4 == 1)
  {
    return 1;
  }
  else if (n % 4 == 3)
  {
    return 0;
  }
  else
    return n + 1;
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
    if (a == 1 && b == 1)
    {
      cout << "3" << endl;
    }
    else if (calcxor(a - 1) == b)
    {
      cout << a << endl;
    }
    else if (calcxor(a) == b)
      cout << a + 2 << endl;
    else
      cout << a + 1 << endl;
  }
  return 0;
}