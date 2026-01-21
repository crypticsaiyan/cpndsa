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
    ll n;
    cin >> n;
    ll arr[n];
    fo(i, n)
    {
      cin >> arr[i];
    }
    ll max = 2 * arr[0] - 1;
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
      if (arr[i] > max)
      {
        flag = 0;
        break;
      }
      else
      {
        if (2 * arr[i] - 1 < max)
        {
          max = 2 * arr[i] - 1;
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