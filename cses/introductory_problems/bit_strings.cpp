#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long power(long long base, long long index) {
  long long ans = 1;
  while (index > 0) {
    if (index & 1) {
      ans = (ans * base) % MOD;
    }
    base = (base * base) % MOD;
    index >>= 1;
  }
  return ans;
}

int main() {
  long long n;
  cin >> n;
  cout << power(2, n);
  return 0;
}
