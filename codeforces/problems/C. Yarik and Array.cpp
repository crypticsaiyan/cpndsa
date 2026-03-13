// problem-url: https://codeforces.com/problemset/problem/1899/C
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)                                                                  \
  for (auto x : v) {                                                           \
    cout << x << " ";                                                          \
  }                                                                            \
  cout << endl
#define pa(i, n, arr)                                                          \
  for (int i = 0; i < n; i++) {                                                \
    cout << arr[i] << " ";                                                     \
  }                                                                            \
  cout << endl
#define vi vector<int>

// string str; getline(cin, str);

int32_t main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector<int> v(n);
    fo(i, n) cin >> v[i];
    vector<int> sum(n);
    sum[0] = v[0];
    int temp = v[0];
    for (int i = 0; i < n - 1; i++) {
      if ((v[i] + v[i + 1]) % 2) {
        // valid
        if (temp > 0)
          temp += v[i + 1];
        else
          temp = v[i + 1];
        sum[i + 1] = temp;
      } else {
        // invalid
        temp = v[i + 1];
        sum[i + 1] = temp;
      }
    }
    int maxi = INT_MIN;
    for (auto &x : sum)
      maxi = max(maxi, x);
    cout << maxi << endl;
  }
  return 0;
}
