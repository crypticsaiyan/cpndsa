#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int longest_subs = 1;
  int temp_subs = 1;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i + 1])
      temp_subs++;
    else {
      longest_subs = max(longest_subs, temp_subs);
      temp_subs = 1;
    }
  }
  longest_subs = max(longest_subs, temp_subs);
  cout << longest_subs;
  return 0;
}
