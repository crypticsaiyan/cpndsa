#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
  a = a ^ b;
  a = a ^ b;
  b = a ^ b;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> v;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back({temp, i});
  }
  sort(v.begin(), v.end());
  int base = 1;
  for (int i = 0; i < n - 1; i++)
    if (v[i + 1].second < v[i].second)
      base++;
  int a, b;
  for (m--) {
    if (n == 1)
      cout << "1" << endl;
    else {
    }
  }
  return 0;
}
