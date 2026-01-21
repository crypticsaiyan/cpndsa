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
        if (n % 2)
        {
            if (n < 26)
                cout << "-1" << endl;
            else
            {
                cout << "1 2 2 3 3 4 4 5 5 1 6 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 6 ";
                for (int i = 0; i < (n - 27) / 2; i++)
                {
                    cout << 14 + i << " " << 14 + i << " ";
                }
            }
        }
        else
        {
            for (int i = 0; i < n/2; i++)
            {
                cout << i+1 << " " << i+1 << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}