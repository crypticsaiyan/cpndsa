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

string rev(string &s)
{
  for (char &c : s)
  {
    if (c == '1')
      c = '2';
    else if (c == '2')
      c = '1';
  }
  return s;
}

// string answer(int k, long long x)
// {
//   if (static_cast<long long>(pow(2, k)) == x)
//   {
//     return "";
//   }
//   if (k == 1)
//   {
//     if (x == 1)
//       return "1";
//     else
//       return "2";
//   }
//   if (static_cast<long long>(pow(2, k)) < x)
//   {
//     // cout << "x is: " << x << "and other is: " << x - static_cast<long long>(pow(2, k)) << endl;
//     // cout << "calling ans(" << k << ", " << static_cast<long long>(pow(2, k + 1)) - x << ")" << endl;
//     string temp = answer(k, static_cast<long long>(pow(2, k + 1)) - x);
//     return rev(temp);
//   }
//   else
//     return answer(k - 1, x) + '1';
// }

string answer(int k, long long x)
{
  long long power_of_2 = 1LL << k;  
  
  if (power_of_2 == x)
  {
    return "";
  }
  if (k == 1)
  {
    if (x == 1)
      return "1";
    else
      return "2";
  }
  if (power_of_2 < x)
  {
    string temp = answer(k, (1LL << (k + 1)) - x); 
    return rev(temp);
  }
  else
    return answer(k - 1, x) + '1';
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, k, x;
  cin >> t;
  while (t--)
  {
    cin >> k >> x;
    string ans = answer(k, x);
    cout << ans.length() << endl;
    fo(i, ans.length())
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}