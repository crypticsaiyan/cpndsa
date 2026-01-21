#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int arr[26] = {0};
  for (int i = 0; i < s.size(); i++) {
    arr[s[i] - 65]++;
  }
  int odd = 0, even = 0;
  int oddind = -1;
  for (int i = 0; i < 26; i++) {
    if (arr[i] % 2) {
      odd++;
      oddind = i;
    } else
      even++;
  }
  vector<char> ans;
  if (odd > 1)
    cout << "NO SOLUTION";
  else if (odd == 1) {
    for (int i = 0; i < 26; i++) {
      if (arr[i] % 2 == 0) {
        for (int j = 0; j < arr[i] / 2; j++)
          ans.push_back(i + 65);
      }
    }
    for (int j = 0; j < ans.size(); j++)
      cout << ans[j];
    for (int j = 0; j < arr[oddind]; j++)
      cout << (char)(oddind + 65);
    for (int j = ans.size() - 1; j >= 0; j--)
      cout << ans[j];
  } else {
    for (int i = 0; i < 26; i++) {
      if (arr[i] % 2 == 0) {
        for (int j = 0; j < arr[i] / 2; j++)
          ans.push_back(i + 65);
      }
    }
    for (int j = 0; j < ans.size(); j++)
      cout << ans[j];
    for (int j = ans.size() - 1; j >= 0; j--)
      cout << ans[j];
  }

  return 0;
}
