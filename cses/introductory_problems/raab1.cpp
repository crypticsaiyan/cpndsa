#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, a, b;
  cin >> t;
  while (t--) {
    cin >> n >> a >> b;
    if (a + b > n)
      cout << "NO\n";
    else if ((a == 0 || b == 0) && (a + b) != 0)
      cout << "NO\n";
    else {
      cout << "YES\n";
      for (int i = 0; i < n; i++) {
        cout << i + 1 << " ";
      }
      cout << endl;
      for (int i = 0; i < b; i++)
        cout << a + i + 1 << " ";
      for (int i = b; i < b + a; i++)
        cout << i - b + 1 << " ";
      for (int i = a + b; i < n; i++)
        cout << i + 1 << " ";
    }
    cout << endl;
  }
  return 0;
}
