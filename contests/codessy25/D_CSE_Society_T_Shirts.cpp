#include <bits/stdc++.h>
using namespace std;

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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;

  int price[t];
  int a[t];
  int b[t];
  fo(i, t)
  {
    cin >> price[i];
  }
  fo(i, t)
  {
    cin >> a[i];
  }
  fo(i, t)
  {
    cin >> b[i];
  }
  vector<vector<int>> v(6);
  fo(i, t)
  {
    if (a[i] == b[i] && b[i] == 1)
    {
      v[0].push_back(price[i]);
    }
    else if (a[i] == b[i] && b[i] == 2)
    {
      v[1].push_back(price[i]);
    }
    else if (a[i] == b[i] && b[i] == 3)
    {
      v[2].push_back(price[i]);
    }
    else if ((a[i] == 1 && b[i] == 2) || (a[i] == 2 && b[i] == 1))
    {
      v[3].push_back(price[i]);
    }
    else if ((a[i] == 3 && b[i] == 2) || (a[i] == 2 && b[i] == 3))
    {
      v[4].push_back(price[i]);
    }
    else if ((a[i] == 1 && b[i] == 3) || (a[i] == 3 && b[i] == 1))
    {
      v[5].push_back(price[i]);
    }
  }
  fo(i, 6)
  {
    sort(v[i].begin(), v[i].end());
  }
  int s;
  cin >> s;
  int mini[6];
  int ind[6];
  fo(i, 6)
  {
    ind[i] = v[i].size();
  }
  int ptr[6] = {0};
  while (s--)
  {
    int ans;
    int minind = -1;
    int k;
    cin >> k;
    fo(i, 6)
    {
      if (ptr[i] != ind[i])
      {
        mini[i] = v[i][ptr[i]];
      }
      else
      {
        mini[i] = INT_MAX;
      }
    }
    if (k == 1)
    {
      if (mini[0] <= mini[3] && mini[0] <= mini[5])
      {
        minind = 0;
        ans = mini[0];
      }
      else if (mini[3] <= mini[0] && mini[3] <= mini[5])
      {
        minind = 3;
        ans = mini[3];
      }
      else if (mini[5] <= mini[3] && mini[5] <= mini[0])
      {
        minind = 5;
        ans = mini[5];
      }
    }
    else if (k == 2)
    {
      if (mini[1] <= mini[3] && mini[1] <= mini[4])
      {
        minind = 1;
        ans = mini[1];
      }
      else if (mini[3] <= mini[1] && mini[3] <= mini[4])
      {
        minind = 3;
        ans = mini[3];
      }
      else if (mini[4] <= mini[3] && mini[4] <= mini[1])
      {
        minind = 4;
        ans = mini[4];
      }
    }
    else if (k == 3)
    {
      if (mini[2] <= mini[4] && mini[2] <= mini[5])
      {
        minind = 2;
        ans = mini[2];
      }
      else if (mini[4] <= mini[2] && mini[4] <= mini[5])
      {
        minind = 4;
        ans = mini[4];
      }
      else if (mini[5] <= mini[4] && mini[5] <= mini[2])
      {
        minind = 5;
        ans = mini[5];
      }
    }
    if (minind == -1 || ans == INT_MAX)
    {
      cout << -1 << " ";
    }
    else
    {
      cout << ans << " ";
      ptr[minind]++;
    }
  }
  return 0;
}