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
  int l, c;
  cin >> l >> c;
  char arr[l][c];
  int flag[l][c];
  fo(i, l)
  {
    fo(j, c)
    {
      flag[l][c] = 0;
    }
  }
  bool isChanged[l][c];
  fo(i, l)
  {
    fo(j, c)
    {
      isChanged[l][c] = false;
    }
  }
  fo(i, l)
  {
    fo(j, c)
    {
      cin >> arr[i][j];
    }
  }
  int n;
  cin >> n;
  fo(i, n)
  {
    string word;
    multiset<char> word_set;
    cin >> word;
    fo(j, word.length())
    {
      word_set.insert(word[j]);
    }
    // for (auto &x : word_set)
    // {
    //   cout << x << " ";
    // }
    multiset<char> ana;
    // horizontal checking
    fo(k, c)
    {
      for (int j = 0; j <= l - word.length(); j++)
      {
        for (int s = j; s < j + word.length(); s++)
        {
          ana.insert(arr[s][k]);
        }
        if (word_set == ana)
        {
          for (int s = j; s < word.length(); s++)
          {
            if (!isChanged[s][k])
            {
              flag[s][k]++;
              isChanged[s][k] = true;
            }
          }
        }
        ana.clear();
      }
    }
    fo(x, l)
    {
      fo(y, c)
      {
        isChanged[x][y] = false;
      }
    }
    // vertical checking
    fo(k, l)
    {
      for (int j = 0; j <= c - word.length(); j++)
      {
        for (int s = j; s < j + word.length(); s++)
        {
          ana.insert(arr[k][s]);
        }
        if (word_set == ana)
        {
          for (int s = j; s < word.length(); s++)
          {
            if (!isChanged[k][s])
            {
              flag[k][s]++;
              isChanged[k][s] = true;
            }
          }
        }
        ana.clear();
      }
    }
    fo(x, l)
    {
      fo(y, c)
      {
        isChanged[x][y] = false;
      }
    }
    // diagonal checking
    fo(k, c)
    {
    }
  }
  int ans = 0;
  fo(i, l)
  {
    fo(j, c)
    {
      cout << flag[l][c] << " ";
      if (flag[l][c] > 1)
      {
        ans++;
      }
    }
    cout << endl;
  }
  cout << ans;
  return 0;
}