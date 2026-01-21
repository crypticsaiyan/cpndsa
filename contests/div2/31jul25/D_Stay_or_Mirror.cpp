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
    int arr[n];
    fo(i, n)
    {
      cin >> arr[i];
      arr[i] = min(arr[i], 2 * n - arr[i]);
    }
    int ans = 0;
    fo(i, n - 1)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (arr[j] < arr[i])
        {
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}