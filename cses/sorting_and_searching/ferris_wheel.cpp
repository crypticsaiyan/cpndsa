#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> arr(n);
  for (int &temp : arr)
    cin >> temp;
  sort(arr.begin(), arr.end());
  int low = 0, high = n - 1, ans = 0;
  while (low <= high) {
    if (arr[low] + arr[high] <= x) {
      low++;
      high--;
    } else
      high--;
    ans++;
  }
  cout << ans;
  return 0;
}
