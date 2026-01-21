// side = max(m, n)
// side = odd -> (odd_ind, 0) se manhatten -
// side = even -> (0, even_ind) se manhatten -
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, x, y;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    long long side = max(x, y);
    long long vertex = side * side;
    if (side % 2 == 0)
      cout << vertex - (side - x) - (y) + 1;
    else
      cout << vertex - (x) - (side - y) + 1;
    cout << endl;
  }
  return 0;
}
