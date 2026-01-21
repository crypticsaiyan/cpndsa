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
        if (k == n || k == 1)
        {
            if (n == 1)
            {
                cout << "1" << endl;
                cout << "1" << endl;
            }
            else
                cout << "-1" << endl;
        }
        else
        {
            cout << "3" << endl;
            if (k <= (n + 1) / 2)
            {
                cout << "1 " << 2 << " " << 2 * k - 1 << endl;
            }
            else
            {
                cout << "1 " << 2 * k - n + 1 << " " << n << endl;
            }
        }
    }

    return 0;
}