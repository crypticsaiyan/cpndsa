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
    string s;
    cin >> s;
    set<char> charset;
    vi prefix(n);
    vi suffix(n);
    fo(i, n)
    {
      charset.insert(s[i]);
      prefix[i] = charset.size();
    }
    charset.clear();
    for (int i = n - 1; i >= 0; i--)
    {
      charset.insert(s[i]);
      suffix[i] = charset.size();
    }
    int maxi = 0;
    fo(i, n-1){
     maxi = max(maxi, prefix[i]+suffix[i+1]); 
    }
    cout << maxi << endl;
  }
  return 0;
}