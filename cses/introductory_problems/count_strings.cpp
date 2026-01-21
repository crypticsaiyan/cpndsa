#include <bits/stdc++.h>
using namespace std;

set<string> cnt;
int k = 0;

void solve(string str, map<char, int> mp, int n) {
  if (n == 0) {
    k++;
    cnt.insert(str);
    return;
  }
  for (auto &x : mp) {
    if (x.second > 0) {
      x.second--;
      solve(x.first + str, mp, n - 1);
      x.second++;
    }
  }
}

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  for (int i = 0; i < s.size(); i++) {
    mp[s[i]]++;
  }
  solve("", mp, s.size());
  cout << k << endl;
  for (auto &x : cnt) {
    cout << x << endl;
  }
  return 0;
}
