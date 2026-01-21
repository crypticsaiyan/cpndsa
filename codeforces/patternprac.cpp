#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < 2*i-1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1";
    //         }
    //         else
    //         {
    //             cout << "0";
    //         }
    //     }

    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << j+1;
    //     }
    //     for (int j = 0; j < 2*(n-i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j >=1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << char(65 + j) << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = n; i >= 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << char(64 + i) << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << char(65 + j);
    //     }
    //     for (int j = i - 2; j >= 0; j--)
    //     {
    //         cout << char(65 + j);
    //     }

    //     cout << endl;
    // }
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < 2 * (n - 1 - i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < 2 * (n - i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    int w = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                if (j == 0 || j == w - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}