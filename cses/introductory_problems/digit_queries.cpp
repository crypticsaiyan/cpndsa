#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int q, k;
  cin >> q;
  while (q--) {
    cin >> k;
    int start = 1;
    int base = 9;
    int digits = 1;
    while (k > base * digits) {
      k -= base * digits;
      digits++;
      base *= 10;
      start *= 10;
    }
    int number = start + (k - 1) / digits;
    int pos = (k - 1) % digits;
    cout << to_string(number)[pos] << endl;
  }
  return 0;
}
