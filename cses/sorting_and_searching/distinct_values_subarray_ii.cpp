#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  unordered_map<int, int> freq;
  long long ans = 0;
  int left = 0;
  for (int right = 0; right < n; right++) {
    freq[v[right]]++;
    while ((int)freq.size() > k) {
      freq[v[left]]--;
      if (freq[v[left]] == 0)
        freq.erase(v[left]);
      left++;
    }
    ans += right - left + 1;
  }
  cout << ans;
  return 0;
}
