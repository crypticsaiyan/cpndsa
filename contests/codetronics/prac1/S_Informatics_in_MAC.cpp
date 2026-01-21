#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int hash[100000] = {0};
        for (int j = 0; j < n; j++)
        {
            hash[arr[j]]++;
        }
        int sorted[n];
        for (int j = 0; j < n; j++)
        {
            sorted[j] = arr[j];
        }
        sort(sorted, sorted + n);
        int min;
        for (int j = 0; j < n; j++)
        {

            if (hash[j] == 0)
            {
                min = j;
                break;
            }
            else if (hash[j] == 1)
            {
                min = -1;
                break;
            }
            else if (hash[j] >= 2)
            {
                continue;
            }
        }
        if (min == -1)
            cout << "-1" << endl;
        else
        {
            cout << "2" << endl;
            if (min == 0)
            {
                cout << "1 1" << endl
                     << "2 " << n << endl;
            }
            else
            {
                cout << "1 ";
                for (int j = 0; j < n; j++)
                {
                    if (arr[j] == min - 1)
                    {
                        cout << j + 1 << endl
                             << j + 2 << " " << n << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}