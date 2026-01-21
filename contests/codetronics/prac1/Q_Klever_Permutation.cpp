#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int arr[n]={0};
        int a = 0, start = 0;
        for (int i = 0; i < n; i++)
        {
            if (a >= n)
            {
                a = ++start;
            }
            arr[a] = i + 1;
            a += k;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
    }

    return 0;
}