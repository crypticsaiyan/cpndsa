#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long arr[n];
    long long numreq[n];
    int flag[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        numreq[i] = pow(2, ((int)log2(arr[i]) + 1)) - arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << numreq[i] << " t";
    }
    cout << endl;

    int count = 0;
    if (n == 1)
        cout << "1";
    else
    {
        for (int i = n-1; i > 0; i--)
        {
            auto it1 = lower_bound(arr, arr + i, numreq[i]);
            auto it2 = upper_bound(arr, arr + i, numreq[i]);
            if (it1 != arr + i && *it1 == numreq[i])
            {
                int startIndex = it1 - arr;
                int endIndex = it2 - arr;
                cout << *it1 << "it" << endl;
                for (int j = startIndex; j < endIndex; j++)
                {
                    flag[j] = 1;
                }
            }
            else if (flag[i] == 0)
            {
                count++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << flag[i] << " ";
        }
        cout << endl;
        if (flag[0] == 0)
            count++;
        cout << count;
    }
    return 0;
}