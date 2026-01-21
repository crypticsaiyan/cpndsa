#include <bits/stdc++.h>
using namespace std;

int willWord(long long int *arr, int b, int index, int n)
{
    if(index == n-1){
        return 1;
    }
    if (*(arr + index) > *(arr + index + 1))
    {
        *(arr + index) = b - *(arr + index);
        if (*(arr + index) > *(arr + index + 1)){
            return 0;
        }
        if(index != 0){
            if (*(arr + index - 1) > *(arr + index)){
                willWord(arr, b, index -1 , n);
            }
        }
    }
    willWord(arr, b, index+1, n);
    return 1;
}

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
        flag = willWord(a, b, 0, n);
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
