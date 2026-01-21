#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n * (n + 1) % 4 == 0) {
    cout << "YES\n";
    if (n % 2) {
      cout << n / 2 << endl << "3 ";
      for (int i = 4 + (n - 3) / 4; i <= 4 + (n - 3) / 2 - 1; i++) {
        cout << i << " " << n - i + 4 << " ";
      }
      cout << endl << n / 2 + 1 << endl;
      cout << "1 2 ";
      for (int i = 4; i <= 4 + (n - 3) / 4 - 1; i++) {
        cout << i << " " << n - i + 4 << " ";
      }
    } else {
      cout << n / 2 << endl;
      for (int i = 1; i <= n / 4; i++) {
        cout << i << " " << n - i + 1 << " ";
      }
      cout << endl << n / 2 << endl;
      for (int i = n / 4 + 1; i <= n / 2; i++) {
        cout << i << " " << n - i + 1 << " ";
      }
    }
  } else
    cout << "NO";
  return 0;
}
