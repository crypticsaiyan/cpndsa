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
    cin >> n;
    string s;
    cin >> s;
    cin >> m;
    string v;
    cin >> v;
    vector<char> sign;
    fo(i, m)
    {
      char x;
      cin >> x;
      sign.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
      if (sign[i] == 'D')
      {
        s = s + v[i];
      }
      else
      {
        s = v[i] + s;
      }
    }
    cout << s << endl;
  }

  return 0;
}