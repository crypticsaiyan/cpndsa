#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        if (m > 1)
        {
            if (m <= n)
                cout << m << endl;
            else
                cout << n+1 << endl;
            int c = 0;
            int j = 0;
            while (c < n)
            {
                for (int k = m - j; k < m; k++)
                {
                    cout << k << " ";
                }

                for (int k = 0; k < m - j; k++)
                {
                    cout << k << " ";
                }
                cout << endl;
                j++;
                j = j % (m - 1);
                c++;
            }

            // for (int j = 0; j < n; j++)
            // {
            // }
        }
        else
        {
            cout << "0" << endl;
            for (int j = 0; j < n; j++)
            {
                cout << "0" << endl;
            }
                }
    }

    return 0;
}