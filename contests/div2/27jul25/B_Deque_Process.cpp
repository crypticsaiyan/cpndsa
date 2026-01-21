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
    int n;
    cin >> n;
    int arr[n];
    fo(i, n)
    {
      cin >> arr[i];
    }
    cout << "LR";
    int a = 1, b = n - 2;
    int trend;
    if (arr[0] > arr[n - 1])
    {
      trend = 1;
    }
    else
    {
      trend = 0;
    }
    while (a < b)
    {
      if (trend == 0)
      {
        if (arr[a] > arr[b])
        {
          cout << "LR";
        }
        else
        {
          cout << "RL";
        }
        trend = 1;
      }
      else
      {
        if (arr[a] < arr[b])
        {
          cout << "LR";
        }
        else
          cout << "RL";
        trend = 0;
      }
      a++;
      b--;
      if (a == b)
        cout << "L";
    }
    cout << "\n";
  }
  return 0;
}