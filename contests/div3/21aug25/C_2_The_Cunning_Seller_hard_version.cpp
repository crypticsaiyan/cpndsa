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

long long power(long long base, ll expo)
{
  long long ans = 1;
  fo(i, expo)
  {
    ans *= base;
  }
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t, n, k;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    ll maxPow = log10(n) / log10(3);
    ll minsteps = 0;
    int ans = 0;
    for (ll i = maxPow; i >= 0; i--)
    {
      ll temp = n / power(3, i);
      minsteps += temp;
      if ((n % power(3, i)) == 0)
        break;
      n = n % power(3, i);
    }
    cout << minsteps << endl;
    if (k < minsteps)
    {
      ans = -1;
    }
    else
    {
      fo(i, 19)
      {
        if (k * power(3, i) >= n)
        {
          
          while (k * power(3, i) < n)
          {
            
          }
        }
      }
    }
  }
  return 0;
}