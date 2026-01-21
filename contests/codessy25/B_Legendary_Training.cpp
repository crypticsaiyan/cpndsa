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
  int n;
  cin >> n;
  int arr[n];
  fo(i, n)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int i = 1;
  int k = 0;
  int ans = 0;
  while (k != n)
  {
    if (arr[k] >= (i))
    {
      ans++;
      i++;
    }
    k++;
  }
  cout << ans << endl;
  return 0;
}