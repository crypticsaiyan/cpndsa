#include <bits/stdc++.h>
using namespace std;

// time complexity: O(log(min(a, b)))

int hcf(int a, int b)
{
  if (a == 0)
    return b;
  if (b == 0)
    return a;
  else if (a > b)
    return hcf(a % b, b);
  else
    return hcf(a, b % a);
}

int main()
{
  cout << hcf(72, 96);
  return 0;
}