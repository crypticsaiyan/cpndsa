#include <bits/stdc++.h>
using namespace std;

int total = 0;

bool isSafe(const vector<string> &board, int x, int y) {
  // *
  if (board[x][y] == '*')
    return false;

  int i, j;
  // upper vertical
  i = x - 1;
  while (i >= 0) {
    if (board[i][y] == 'q')
      return false;
    i--;
  }

  i = x - 1, j = y - 1;
  // upper left diagonal
  while (i >= 0 && j >= 0) {
    if (board[i][j] == 'q')
      return false;
    i--;
    j--;
  }

  // upper right diagonal
  i = x - 1, j = y + 1;
  while (i >= 0 && j < 8) {
    if (board[i][j] == 'q')
      return false;
    i--;
    j++;
  }
  return true;
}

void solve(vector<string> &board, int i, int n) {
  if (i == n) {
    total++;
    return;
  }
  for (int ind = 0; ind < n; ind++) {
    if (isSafe(board, i, ind)) {
      board[i][ind] = 'q';
      solve(board, i + 1, n);
      board[i][ind] = '.';
    }
  }
}

int main() {
  vector<string> board(8);
  for (int i = 0; i < 8; i++) {
    cin >> board[i];
  }
  solve(board, 0, 8);
  cout << total;
  return 0;
}
