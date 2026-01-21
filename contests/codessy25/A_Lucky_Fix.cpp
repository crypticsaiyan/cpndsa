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
    int digits = log10(n) + 1;
    if(n%7==0){
      cout << n << endl;
      continue;
    }
    if (digits == 2)
    {
      for (int i = 1; i <= 9; i++)
      {
        if ((i * 10 + n % 10) % 7 == 0)
        {
          cout << i * 10 + n % 10 << endl;
          break;
        }
      }
    }
    else {
      for (int i = 1; i <= 9; i++)
      {
        if ((i * 100 + n % 100) % 7 == 0)
        {
          cout << i * 100 + n % 100 << endl;
          break;
        }
      }
    }
  }
  return 0;
}