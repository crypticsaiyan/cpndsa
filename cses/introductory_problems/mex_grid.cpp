#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> mex(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      mex[i][j] = i ^ j;
    }
  }
  for (auto &x : mex) {
    for (auto &y : x) {
      cout << y << " ";
    }
    cout << endl;
  }
  return 0;
}
