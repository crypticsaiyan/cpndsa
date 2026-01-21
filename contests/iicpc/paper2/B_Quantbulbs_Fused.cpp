//B87678
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
  int t, n;
  cin >> t;
  double E[1000001] = {0};
  E[1] = 1;
  for (int i = 2; i <= 1000000; i++)
  {
    E[i] = (1 / static_cast<double>(i)) * (1 + i * E[i - 1]);
  }
  // pa(i, 10, E);
  while (t--)
  {
    cin >> n;
    cout << floor(E[n]) << endl;
  }
  return 0;
}