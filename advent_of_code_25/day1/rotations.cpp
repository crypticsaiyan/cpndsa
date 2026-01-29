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
      pos -= magn;
    } else
      pos += magn;
    pos = pos % 100;
    if (pos < 0)
      pos += 100;
    if (pos == 0)
      ans++;
  }
  cout << "answer: " << ans;
  return 0;
}
