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
    string s;
    cin >> s;
    int n0 = 0, n1 = 0;
    fo(i, s.size())
    {
      if (s[i] == '0')
      {
        n0++;
      }
      else
      {
        n1++;
      }
    }
    // cout << n0 << " " << n1;
    int answer_string_len = 0;
    fo(i, s.size())
    {
      if (s[i] == '0' && n1 > 0)
      {
        answer_string_len++;
        n1--;
      }
      else if (s[i] == '1' && n0 > 0)
      {
        answer_string_len++;
        n0--;
      }
      else
      {
        break;
      }
    }
    cout << s.size() - answer_string_len << "\n";
  }
  return 0;
}