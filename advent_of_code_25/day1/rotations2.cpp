#include <bits/stdc++.h>
using namespace std;

int main() {
  int pos = 50;
  fstream fin("rotations.txt");
  if (!fin) {
    cout << "error opening the file";
    return 1;
  }
  string word;
  int ans = 0;
  while (fin >> word) {
    char direction = word[0];
    int magn = stoi(word.substr(1));
    if (direction == 'L') {
      int dist_to_zero = (pos == 0) ? 100 : pos;
      if (magn >= dist_to_zero) {
        ans++;
        int rem_magn = magn - dist_to_zero;
        ans += rem_magn / 100;
        int rem = rem_magn % 100;
        pos = (100 - rem) % 100;
      } else {
        pos -= magn;
      }
    } else {
      pos += magn;
      ans += pos / 100;
    }
    pos = pos % 100;
    if (pos < 0)
      pos += 100;
  }
  cout << "answer: " << ans;
  return 0;
}
