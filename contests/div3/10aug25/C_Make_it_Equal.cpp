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

bool comparator(int x, int y)
{
  return x > y;
}

int binary_search(vi v, int left, int right, int toFind, bool *isUsed)
{
  int mid = left + (right - left) / 2;
  if (left > right)
    return -1;
  if (v[mid] == toFind && isUsed[mid] == 0)
    return mid;
  else if (v[mid] > toFind)
    return binary_search(v, mid + 1, right, toFind, isUsed);
  else
    return binary_search(v, left, mid - 1, toFind, isUsed);
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, n, k;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    vi v;
    vi toForm;
    int x;
    fo(i, n)
    {
      cin >> x;
      v.push_back(x);
    }
    fo(i, n)
    {
      cin >> x;
      toForm.push_back(x % k);
    }
    fo(i, n)
    {
      v.push_back(abs(v[i] - k));
    }
    sort(v.begin(), v.end(), comparator);
    sort(toForm.begin(), toForm.end(), comparator);
    bool isUsed[v.size()] = {0};
    pv(i, v);
    pv(i, toForm);
    int flag = 1;
    fo(i, n)
    {

      pv(i, v);
      pa(i, v.size(), isUsed);
      pv(i, toForm);
      int foo = binary_search(v, 0, v.size() - 1, toForm[i], isUsed);
      cout << "foo is " << foo << endl;
      if (foo == -1)
      {
        flag = 0;
        break;
      }
      else
      {
        if (isUsed[foo] == 0)
        {
          isUsed[foo] = 1;
          int leftIndex = binary_search(v, 0, v.size() - 1, v[foo] + k, isUsed);
          if (leftIndex != -1)
          {
            isUsed[leftIndex] = 1;
          }
          else
          {
            int rightIndex = binary_search(v, 0, v.size() - 1, abs(v[foo] - 1), isUsed);
            isUsed[rightIndex] = 1;
          }
        }
        else
        {
          flag = 0;
          break;
        }
      }
    }
    pv(i, v);
    pv(i, toForm);
    if (flag)
      py;
    else
      pn;
  }

  return 0;
}