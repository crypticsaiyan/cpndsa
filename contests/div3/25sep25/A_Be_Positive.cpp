#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0, c = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == -1)
                a++;
            else if (x == 0)
                b++;
            else if (x == 1)
                c++;
        }
        cout << b + (a % 2) * 2 << endl;
    }
    return 0;
}