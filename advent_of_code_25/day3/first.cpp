#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream f("input.txt");
  if (!f) {
    cout << "error in reading file";
  }
  vector<string> v;
  string number;
  while (getline(f, number)) {
    v.push_back(number);
  }
  int ans = 0;
  for (int i = 0; i < v.size(); i++) {
    string s = v[i];
    char max1 = s[0];
    char max2 = s[1];
    if (max2 > max1) {
      max1 = max2;
      max2 = s[2];
    }
    for (int i = 2; i < s.size(); i++) {
      if (s[i] > max1 && i != s.size() - 1) {
        max1 = s[i];
        max2 = s[i + 1];
      } else if (s[i] > max2) {
        max2 = s[i];
      }
    }
    int x = (max1 - 48) * 10 + (max2 - 48);
    ans += x;
  }
  cout << ans;
  return 0;
}
