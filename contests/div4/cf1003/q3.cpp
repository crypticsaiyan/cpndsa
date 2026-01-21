#include <bits/stdc++.h>
using namespace std;

int willWord(long long int *arr, int b, int index, int n);

int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        long long int a[n];
        long long int b;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cin >> b;
        int flag = 1;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                if (willWord(a, b, j, n) == 0)
                {
                    flag = 0;
                }
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

int willWord(long long int *arr, int b, int index, int n)
{
    *(arr + index) = b - *(arr - index);
    if (index == 0)
    {
        if (*(arr + index) > *(arr + index + 1))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (index == n - 2)
    {
        if (*(arr + index) > *(arr + index + 1))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (*(arr + index) > *(arr + index + 1))
        {
            willWord(arr, b, index + 1, n);
        }
        else if (*(arr + index - 1) > *(arr + index))
        {
            willWord(arr, b, index - 1, n);
        }
    }
    return 1;
}