#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> applicants(n), rooms(m);
  for (int &x : applicants)
    cin >> x;
  for (int &x : rooms)
    cin >> x;
  sort(applicants.begin(), applicants.end());
  sort(rooms.begin(), rooms.end());
  int i = 0, j = 0, ans = 0;
  while (i < n && j < m) {
    if (abs(applicants[i] - rooms[j]) <= k) {
      i++;
      j++;
      ans++;
    } else if (applicants[i] > rooms[j] + k)
      j++;
    else
      i++;
  }
  cout << ans;
  return 0;
}
