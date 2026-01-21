#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int a[n][m];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> a[j][k];
            }
        }
        int sum[n] = {0};
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                sum[j] += a[j][k];
            }
        }
        int* sortedindices[n];
        for (int j = 0; j < n; j++)
        {
            sortedindices[j]=&sum[n];
        }
        sort(sum, sum + n);
        
    }

    return 0;
}