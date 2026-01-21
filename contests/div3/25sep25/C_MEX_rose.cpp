#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a = 0, b = 0;
        vector<int> arr(k + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                b++;
            }
            if (x < k)
            {
                arr[x] = 1;
            }
        }
        for (int i = 0; i < k; i++)
        {
            if (arr[i] == 0)
                a++;
        }

        cout << max(a, b) << endl;
    }
    return 0;
}