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
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
    if ((b <= s / k) && (b >= (s - (n - 1) * (k - 1)) / k))
    {
      ll diff = s - b * k;
      vector<ll> arr;
      ll x;
      long long sum = 0;
      fo(i, n - 1)
      {
        if(diff>=k-1){
          x = k-1;
          diff = diff - (k-1);
        }
        else{
          x = diff;
          diff = 0;
        }
        arr.push_back(x);
        sum+=x;
      }
      arr.push_back(s-sum);
      pv(j, arr);
    }
    else
      cout << "-1\n";
  }
  return 0;
}