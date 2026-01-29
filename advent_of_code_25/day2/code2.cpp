#include <bits/stdc++.h>
using namespace std;

int len(long long x) { return log10(x) + 1; }

bool isInValid(long long x) {
  string k = to_string(x);
  if (k.length() < 2)
    return false;
  string doubled = k + k;
  size_t foundIndex = doubled.find(k, 1);
  return foundIndex < k.length();
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
      if (isInValid(x)) {
        cout << x << endl;
        ans += x;
      }
    }
  }
  cout << ans;
  return 0;
}
