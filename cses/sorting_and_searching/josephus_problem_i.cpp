// 1 ->  1
// 2 ->  2 1
// 3 ->  2 1 3
// 4 ->  2 4 3 1
// 5 ->  2 4 1 5 3
// 6 ->  2 4 6 3 1  5
// 7 ->  2 4 6 1 5  3  7
// 8 ->  2 4 6 8 3  7  5 1
// 9 ->  2 4 6 8 1  5  9 7 3
// 10 -> 2 4 6 8 10 3  7 1 9  5
// 11 -> 2 4 6 8 10 1  5 9 3  11 7
// 12 -> 2 4 6 8 10 12 3 7 11 5  1 9
// 13 -> 2 4 6 8 10 12 1 5 9  13 3 7 11
// 14 -> 2 4 6 8 10 12 14 3 7 11 1 5 9 13

// 1 2 3 4 5 1 3 5 3

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  queue<int> q;
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    q.push(i + 1);
  }
  while (!q.empty()) {
    q.push(q.front());
    q.pop();
    ans.push_back(q.front());
    q.pop();
  }
  for (auto &x : ans) {
    cout << x << " ";
  }
  return 0;
}
