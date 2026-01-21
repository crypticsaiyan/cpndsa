#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)         \
  for (auto &x : v)   \
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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(3, 0));
  set<int> peg;

  int l, r;
  fo(i, n)
  {
    cin >> l >> r;
    v[i] = {l, r, 0};
  }

  int p;
  cin >> p;
  int x;
  int curr_index = 0;
  fo(i, p)
  {
    cin >> x;
    if (x <= r)
    {
      while (curr_index < n && v[curr_index][1] < x)
      {
        curr_index++;
      }
      if (v[curr_index][0] <= x)
      {
        if (curr_index < n - 1 && v[curr_index + 1][0] == x)
        {
          v[curr_index + 1][2]++;
        }
        v[curr_index][2]++;
        peg.emplace(x);
      }
    }
  }

  int flag = 1;
  for (auto &k : v)
  {
    if (k[2] > 2)
    {
      flag = 0;
      break;
    }
  }
  vector<int> ans;
  if (!flag)
  {
    cout << "impossible";
  }
  else
  {
    fo(i, n)
    {
      while (v[i][2] < 2)
      {
        if (peg.find(v[i][1]) == peg.end())
        {
          ans.push_back(v[i][1]);
          peg.emplace(v[i][1]);
          if ((i < n - 1) && (v[i][1] == v[i + 1][0]))
          {
            peg.emplace(v[i][1]);
            v[i + 1][2]++;
          }
        }
        else if (peg.find(v[i][1] - 1) == peg.end())
        {
          ans.push_back(v[i][1] - 1);
        }
        else
        {
          ans.push_back(v[i][1] - 2);
        }
        v[i][2]++;
      }
    }
    if (ans.size())
    {
      cout << ans.size() << endl;
      sort(ans.begin(), ans.end());
      pv(ans);
    }
    else
      cout << "0" << endl;
  }
  return 0;
}