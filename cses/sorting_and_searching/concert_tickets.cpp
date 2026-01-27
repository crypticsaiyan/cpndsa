#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  multiset<int> ms;
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    ms.insert(x);
  }
  for (int i = 0; i < m; i++) {
    cin >> x;
    auto ub = ms.upper_bound(x);
    if (ub == ms.begin())
      cout << "-1\n";
    else {
      ub--;
      cout << *ub << endl;
      ms.erase(ub);
    }
  }
  return 0;
}
