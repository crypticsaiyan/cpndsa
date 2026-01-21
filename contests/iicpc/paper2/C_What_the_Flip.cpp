// B87678
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
ll v[1000001][3];

int main()
{
  v[1][0] = 1;
  v[1][1] = 1;
  v[1][2] = 0;

  v[2][0] = 1;
  v[2][1] = 1;
  v[2][2] = 1;
  for (int i = 3; i <= 1000000; i++)
  {
    // S
    v[i][0] = (v[i - 1][1] + v[i - 1][2]) % (1000000007);
    // TS
    v[i][1] = (v[i - 1][2]) % (1000000007);
    // TT
    v[i][2] = (v[i - 1][0]) % (1000000007);
  }
  int t, k;
  cin >> t;
  while (t--)
  {
    cin >> k;
    cout << (v[k][0] + v[k][1] + v[k][2] + 0LL) % (1000000007) << endl;
  }
  return 0;
}