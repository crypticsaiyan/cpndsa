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
    int n, k;
    cin >> n >> k;
    ll arr[n];
    fo(i, n)
    {
      int x;
      cin >> x;
      arr[i] = x % k;
    }
    sort(arr, arr + n, greater());
    if (arr[n - 1] == 0)
    {
      cout << "0" << endl;
    }
    else
    {
      if (k != 4)
      {
        cout << k - arr[0] << endl;
      }
      else
      {
        int c1 = 0, c2 = 0, c3 = 0;
        fo(i, n)
        {
          if (arr[i] == 1)
            c1++;
          else if (arr[i] == 2)
            c2++;
          else if (arr[i] == 3)
            c3++;
        }
        if (c3 > 0 && c2 < 2)
        {
          cout << "1\n";
        }
        else
        {
          if (c2 == 0)
            cout << "2\n";
          else if (c2 == 1)
            cout << "1\n";
          else
            cout << "0\n";
        }
        // cout << "The value of c2 is: " << c2 << endl;
      }
    }
  }
  return 0;
}