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
bool isPrime(int a)
{
  for (int i = 2; i * i <= a; i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return true;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  int d;
  while (t--)
  {
    cin >> d;
    int a = 1 + d;
    while (!isPrime(a))
    {
      a++;
    }
    int b = a + d;
    while (!isPrime(b))
    {
      b++;
    }
    // cout << "a is: " << a << " and b is: " << b << endl;
    cout << a * b << endl;
  }
  return 0;
}