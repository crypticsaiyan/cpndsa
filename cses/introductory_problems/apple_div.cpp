#include <bits/stdc++.h>
#define int long long
using namespace std;

int mindiff(const int *arr, int w1, int w2, int i, int n) {
  if (i == n) {
    return abs(w1 - w2);
  }
  return min(mindiff(arr, w1 + arr[i], w2, i + 1, n),
             mindiff(arr, w1, w2 + arr[i], i + 1, n));
}

int32_t main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << mindiff(arr, 0, 0, 0, n);
  return 0;
}
