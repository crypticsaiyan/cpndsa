// this is a shitty solution :P
#include <bits/stdc++.h>
using namespace std;

int calc_min(vector<vector<int>> &grid, int x, int y) {
  int ans = INT_MAX;
  int n = grid.size() - 1;
  if (y - 2 >= 0) {
    ans = min(ans, grid[x - 1][y - 2]);
  }
  if (y - 1 >= 0) {
    ans = min(ans, grid[x - 2][y - 1]);
  }
  if (y + 1 < n) {
    ans = min(ans, grid[x - 2][y + 1]);
  }
  if (y + 2 < n) {
    ans = min(ans, grid[x - 1][y + 2]);
  }
  return ans + 1;
}

vector<vector<int>> generate(int n) {
  if (n == 4) {
    return {{0, 3, 2, 5}, {3, 4, 1, 2}, {2, 1, 4, 3}, {5, 2, 3, 2}};
  } else if (n == 5) {
    return {{0, 3, 2, 3, 2},
            {3, 4, 1, 2, 3},
            {2, 1, 4, 3, 2},
            {3, 2, 3, 2, 3},
            {2, 3, 2, 3, 4}};
  } else {
    vector<vector<int>> prev = generate(n - 1);
    vector<int> new_row(n);
    prev.push_back(new_row);
    for (int i = 0; i < n; i++) {
      prev[n - 1][i] = calc_min(prev, n - 1, i);
    }
    for (int i = 0; i < n - 1; i++) {
      prev[i].push_back(prev[n - 1][i]);
    }
    return prev;
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> ans = generate(n);
  for (auto &x : ans) {
    for (auto &y : x) {
      cout << y << " ";
    }
    cout << endl;
  }
  return 0;
}
