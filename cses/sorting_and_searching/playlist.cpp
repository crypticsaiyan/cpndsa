#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int temp = 0, ans = 0, x;
  map<int, int> mp;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (mp.find(x) != mp.end())
      temp = max(temp, mp[x]);
    mp[x] = i;
    ans = max(ans, mp[x] - temp);
  }
  cout << ans;
  return 0;
}
