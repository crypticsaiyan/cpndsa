#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1e9 + 7;

int main() {
  int t, n;
  cin >> t;
  const long long MAX = 1000000;
  vector<long long> green(MAX);
  vector<long long> red(MAX);
  green[0] = 1, red[0] = 1;
  for (int i = 1; i < MAX; i++) {
    green[i] = (4 * green[i - 1] + red[i - 1]) % MOD;
    red[i] = (2 * red[i - 1] + green[i - 1]) % MOD;
  }
  while (t--) {
    cin >> n;
    cout << (green[n - 1] + red[n - 1]) % MOD << endl;
  }
  return 0;
}
