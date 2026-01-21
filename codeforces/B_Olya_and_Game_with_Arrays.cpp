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
  while (t--)
  {
    cin >> n;
    vector<int> mn;
    vector<int> mn2;
    fo(i, n)
    {
      int x;
      int m = 1000000001;
      int m2 = 1000000001;
      cin >> x;
      fo(i, x)
      {
        int temp;
        cin >> temp;
        if (temp < m)
        {
          m2 = m;
          m = temp;
        }
        else if (temp < m2)
        {
          m2 = temp;
        }
      }
      mn.push_back(m);
      mn2.push_back(m2);
    }
    sort(mn.begin(), mn.end());
    sort(mn2.begin(), mn2.end());
    ll ans = mn[0];
    for (int i = 1; i < size(mn2); i++)
    {
      ans += mn2[i];
    }
    cout << ans << endl;
  }
  return 0;
}