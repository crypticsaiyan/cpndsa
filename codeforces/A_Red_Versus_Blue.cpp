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
  int t;
  cin >> t;
  while (t--)
  {
    int n, r, b;
    cin >> n >> r >> b;
    int x = r / (b + 1);
    int rem = r - x * (b + 1);
    fo(i, b)
    {
      fo(i, x)
      {
        cout << "R";
      }
      if (rem)
      {
        cout << "R";
        rem--;
      }
      cout << "B";
    }
    fo(i, x)
    {
      cout << "R";
    }
    if (rem)
    {
      cout << "R";
      rem--;
    }
    cout << endl;
  }
  return 0;
}