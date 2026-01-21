#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, v)                     \
  for (int i = 0; i < v.size(); i++) \
  {                                  \
    cout << v[i] << " ";             \
  }                                  \
  cout << endl
#define pa(i, n, arr)         \
  for (int i = 0; i < n; i++) \
  {                           \
    cout << arr[i] << " ";    \
  }                           \
  cout << endl
#define vi vector<int>

// string str; getline(cin, str);

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int server = 0;
  // 0 is left , 1 is right
  int lpoints = 0;
  int rpoints = 0;
  int lwon = 0;
  int rwon = 0;
  string match;
  cin >> match;
  fo(i, match.length())
  {
    if (lpoints - rpoints >= 2 && lpoints >= 5)
    {
      lwon++;
      server = 0;
      lpoints = 0;
      rpoints = 0;
    }
    else if (rpoints - lpoints >= 2 && rpoints >= 5)
    {
      rwon++;
      server = 1;
      lpoints = 0;
      rpoints = 0;
    }
    else if (lpoints == 10)
    {
      lwon++;
      server = 0;
      lpoints = 0;
      rpoints = 0;
    }
    else if (rpoints == 10)
    {
      rwon++;
      server = 1;
      lpoints = 0;
      rpoints = 0;
    }
    if (match[i] == 'S')
    {
      if (server)
        rpoints++;
      else
        lpoints++;
    }
    else if (match[i] == 'R')
    {
      if (server)
      {
        server = 0;
        lpoints++;
      }
      else
      {
        rpoints++;
        server = 1;
      }
    }
    else
    {
      if (rwon == 2)
      {
        cout << lwon << " - " << rwon << " (winner)";
      }
      else if (lwon == 2)
      {
        cout << lwon << " (winner) - " << rwon;
      }
      else if (server)
        cout << lwon << " (" << lpoints << ") - " << rwon << " (" << rpoints << "*)" << endl;
      else
        cout << lwon << " (" << lpoints << "*) - " << rwon << " (" << rpoints << ")" << endl;
    }
  }
  return 0;
}