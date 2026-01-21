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
  int arr[10][10] = {0};
  int n, d, l, r, c;
  cin >> n;
  int flag = 1;
  fo(i, n)
  {
    cin >> d >> l >> r >> c;
    if (d == 0)
    {
      if (c + l - 1 > 10)
      {
        flag = 0;
        break;
      }
      for (int j = c - 1; j < c + l - 1; j++)
      {
        if (arr[r - 1][j] == 1)
        {
          flag = 0;
          break;
        }
        arr[r - 1][j] = 1;
      }
    }
    else
    {
      if (r + l - 1 > 10)
      {
        flag = 0;
        break;
      }
      for (int j = r - 1; j < r + l - 1; j++)
      {
        if (arr[j][c - 1] == 1)
        {
          flag = 0;
          break;
        }
        arr[j][c - 1] = 1;
      }
    }
    if (!flag)
    {
      break;
    }
  }
  if (flag)
  {
    cout << "Y";
  }
  else
    cout << "N";
  return 0;
}