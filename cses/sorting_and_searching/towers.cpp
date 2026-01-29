#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  multiset<int> tower;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    auto it = tower.upper_bound(temp);
    if (it != tower.end()) {
      tower.erase(it);
      tower.insert(temp);
    } else {
      tower.insert(temp);
    }
  }
  cout << tower.size();
  return 0;
}
