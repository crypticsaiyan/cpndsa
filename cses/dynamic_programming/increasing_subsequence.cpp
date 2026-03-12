#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  vector<int> lis;
  lis.push_back(v[0]);
  int ind = 0;
  for (int i = 1; i < n; i++) {
    if (lis[ind] >= v[i]) {
      int x = lower_bound(lis.begin(), lis.end(), v[i]) - lis.begin();
      lis[x] = v[i];
    } else {
      lis.push_back(v[i]);
      ind++;
    }
  }
  cout << ind + 1;
  return 0;
}
