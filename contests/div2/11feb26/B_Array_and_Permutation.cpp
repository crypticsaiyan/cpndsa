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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &k : a)
      cin >> k;
    for (auto &k : b)
      cin >> k;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
      if (a[i] == b[j])
        j++;
      else
        i++;
    }
    if(j!=n) cout << "NO";
    else cout << "YES";
    cout << endl;
  }
  return 0;
}