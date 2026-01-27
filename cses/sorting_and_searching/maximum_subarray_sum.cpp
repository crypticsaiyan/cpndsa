// 8
// -1 3 -2 5 3 -5 2 2
// -1 2  0 5 8  -3 5 7
// -1 -1 -1 -1 -1
//
// 1 1 -5 3 8
// 1 2 -3 0 8
//
// 8 -8 -1
// 8  0 -1
//
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
// -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
// -1 -2 -3 -4 -5 -6 -7 -9 -9 -10

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int prefix[n];
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = arr[i] + prefix[i - 1];
  }
  int mini[n];
  mini[0] = prefix[0];
  for (int i = 1; i < n; i++) {
    mini[i] = min(mini[i - 1], prefix[i - 1]);
  }
  int ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    int temp;
    if (i == 0)
      temp = prefix[i];
    else
      temp = max(prefix[i], prefix[i] - mini[i]);
    ans = max(ans, temp);
  }
  cout << ans;
  return 0;
}

/*
BETTER APPROACH

#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll sum = -1e9;
    ll best = -1e9;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        sum = max(sum + x, x);
        best = max(best, sum);
    }
    cout << best << "\n";
}
*/
