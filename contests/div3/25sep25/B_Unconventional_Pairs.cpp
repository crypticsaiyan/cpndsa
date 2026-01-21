#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        long long diff = 0;
        for (int i = 0; i < n - 1; i+=2)
        {
            if (arr[i + 1] - arr[i] > diff)
            {
                diff = arr[i + 1] - arr[i];
            }
        }
        cout << diff << endl;
    }
    return 0;
}