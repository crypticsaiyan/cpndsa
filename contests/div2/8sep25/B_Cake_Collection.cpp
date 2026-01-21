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
  int t, n, m;
  cin >> t;
  while (t--)
  {
    cin >> n >> m;
    long long arr[n];
    fo(i, n)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    long long ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      if (m == 0)
        break;
      if(i == 0){
        ans += arr[i] * m;
        break;
      }
      ans += arr[i] * (m--);
    }
    cout << ans << endl;
  }
  return 0;
}