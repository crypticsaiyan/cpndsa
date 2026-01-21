#include <bits/stdc++.h>
using namespace std;

vector<string> gc(int n) {
  if (n == 1)
    return {"0", "1"};
  else {
    vector<string> newarr;
    vector<string> prev = gc(n - 1);
    for (int i = 0; i < prev.size(); i++) {
      newarr.push_back("0" + prev[i]);
    }
    for (int i = prev.size() - 1; i >= 0; i--) {
      newarr.push_back("1" + prev[i]);
    }
    return newarr;
  }
}

int main() {
  int n;
  cin >> n;
  for (auto &x : gc(n)) {
    cout << x << endl;
  }
}
