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
    if (n % 9 != 0)
      cout << "0\n";
    else
    {
      int base = 111111111;
      n/=9;
      while(base >1){
        n = n%base;
        base /=10;
      }
      if(n==10) cout << "0\n";
      else cout << "10\n";
    }
  }
  return 0;
}