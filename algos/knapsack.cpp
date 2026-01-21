#include <iostream>
using namespace std;

int main()
{
  int weight[] = {2, 1, 3, 2, 1};
  int value[] = {12, 10, 20, 15, 8};
  int W = 5; // Knapsack capacity
  int n = 5; // Number of items
  int k[6][6];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (i == 0 || j == 0)
      {
        k[i][j] == 0;
      }
      else if (weight[i][j])
    }
  }

  return 0;
}