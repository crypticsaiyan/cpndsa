#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if ((a + b) % 3 != 0)
      cout << "NO" << endl;
    else {
      if (a > 2 * b || b > 2 * a)
        cout << "NO" << endl;
      else
        cout << "YES\n";
    }
  }
  return 0;
}
