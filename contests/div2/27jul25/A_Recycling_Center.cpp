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
    ll n, c;
    cin >> n >> c;
    ll arr[n];
    fo(i, n)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
      if (arr[i] <= c)
      {
        arr[i] = 0;
        for (int i = 0; i < n; i++)
        {
          arr[i] *= 2;
        }
        continue;
      }
    }
    int ans = 0;
    fo(i, n)
    {
      if (arr[i] != 0)
      {
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}