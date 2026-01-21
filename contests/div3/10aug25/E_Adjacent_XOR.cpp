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
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    long long a[n];
    long long b[n];
    fo(i, n)
    {
      cin >> a[i];
    }
    fo(i, n)
    {
      cin >> b[i];
    }
    int flag = 1;
    fo(i, n)
    {
      if (a[i] != b[i])
      {
        if (i < n - 1 && ((a[i] + a[i + 1]) == b[i] || ((b[i] == 0 && a[i] == 1 && a[i + 1] == 1) ? 1 : 0)))
        {
          continue;
        }
        else
        {
          flag = 0;
          break;
        }
      }
    }
    if (flag)
      py;
    else
      pn;
  }

  return 0;
}