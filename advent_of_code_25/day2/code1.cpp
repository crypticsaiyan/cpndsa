#include <bits/stdc++.h>
using namespace std;

int len(long long x) { return log10(x) + 1; }

bool isInValid(long long x) {
  int a = x % static_cast<int>(pow(10, (len(x) / 2)));
  int b = x / pow(10, (len(x) / 2));
  if (a == b)
    return true;
  return false;
}

int main() {
  ifstream f("code.txt");
  if (!f) {
    cout << "error opening file";
    return 1;
  }
  vector<string> codes;
  string code;
  while (getline(f, code, ',')) {
    codes.push_back(code);
  }
  long long ans = 0;
  for (int i = 0; i < codes.size(); i++) {
    vector<string> digits;
    stringstream ss(codes[i]);
    while (getline(ss, code, '-')) {
      digits.push_back(code);
    }
    long long a = stoll(digits[0]);
    long long b = stoll(digits[1]);
    for (long long x = a; x <= b; x++) {
      if (len(x) % 2 == 0) {
        if (isInValid(x)) {
          ans += x;
        }
      }
    }
  }
  cout << ans;
  return 0;
}
