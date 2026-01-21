#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Exponential time complexity O(2^n) - Top Down
int find_lcs_by_rec(int i, int j, string a, string b)
{
  if (i == a.length() || j == b.length())
    return 0;
  if (a[i] == b[j])
    return 1 + find_lcs_by_rec(i + 1, j + 1, a, b);
  else
    return max(find_lcs_by_rec(i + 1, j, a, b), find_lcs_by_rec(i, j + 1, a, b));
}

// Memoization - Top Down (Table: Bottom Up) - O(n x m)
int lcs_memo(int i, int j, string a, string b, vector<vector<int>> dp)
{
  if (i == a.length() || j == b.length())
    return 0;

  if (dp[i][j] != -1)
  {
    return dp[i][j];
  }

  if (a[i] == b[j])
    return dp[i][j] = 1 + lcs_memo(i + 1, j + 1, a, b, dp);
  else
    return dp[i][j] = max(lcs_memo(i + 1, j, a, b, dp), lcs_memo(i, j + 1, a, b, dp));
}

// DP - Bottom Up (Table: Top Down)

int main()
{
  string a, b;
  a = "fjalkdfkjalrahulfjakldfa";
  b = "fjrahula";
  vector<vector<int>> dp(a.length(), vector<int>(b.length(), -1));

  cout << lcs_memo(0, 0, a, b, dp);
  return 0;
}