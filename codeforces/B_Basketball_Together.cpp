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
#define int long long
// string str; getline(cin, str);

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, d;
  cin >> n >> d;
  vi arr(n);
  fo(i, n)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int k = 1;
  int inc = 0;
  int i = n - 1;
  int ans = 0;
  while (inc <= n)
  {
    if (k + inc > n)
    {
      break;
    }
    if (k * arr[i] > d)
    {
      ans++;
      inc += k;
      // cout << "k is: " << k << endl;
      i--;
    }
    else
    {
      k++;
    }
  }
  // pv(i, power);
  cout << ans;
  return 0;
}