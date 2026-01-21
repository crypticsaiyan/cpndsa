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
  long long t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    vector<ll> v;
    int number = 0;
    for (long long i = 1; i <= 18; i++)
    {
      if (n % (power(10, i) + 1) == 0)
      {
        number++;
        v.push_back(n / (power(10, i) + 1));
      }
    }
    cout << number << endl;
    sort(v.begin(), v.end());
    if (number != 0)
    {
      for (auto &x : v)
      {
        cout << x << " ";
      }
      cout << endl;
    }
  }
  return 0;
}