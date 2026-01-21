// 1 x
// 1 2 x
// 1 2 3 x
// 1 2 3 4 -> 2 4 1 3
// 1 2 3 4 5 -> 2 4 1 3 5
// 1 2 3 4 5 6 -> 2 4 6 1 3 5
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 1)
    cout << "1";
  else if (n < 4)
    cout << "NO SOLUTION";
  else {
    int even = n / 2;
    for (int i = 1; i <= even; i++) {
      cout << 2 * i << " ";
    }
    for (int i = 1; i <= n - even; i++) {
      cout << 2 * i - 1 << " ";
    }
  }
  return 0;
}
