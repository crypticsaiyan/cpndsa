#include <bits/stdc++.h>
using namespace std;

struct Project {
  int start, end, reward;
};

bool compar(const Project &a, const Project &b) { return a.end < b.end; }

int main() {
  int n;
  cin >> n;
  vector<Project> v(n);
  for (auto &x : v)
    cin >> x.start >> x.end >> x.reward;
  sort(v.begin(), v.end(), compar);
  vector<long long> dp(n + 1, 0);
  vector<int> end;
  for (auto &x : v)
    end.push_back(x.end);
  for (int i = 1; i <= n; i++) {
    // find first end equal to or greater than v[i-1].start
    // ie lower bound of v[i-1].start;
    // ind will give the index and as dp is 1 indexed, it will be added as ind
    // +1 -1 = ind
    int ind = lower_bound(end.begin(), end.end(), v[i - 1].start) - end.begin();
    dp[i] = max(dp[i - 1], v[i - 1].reward + dp[ind]);
  }
  cout << dp[n];
}
