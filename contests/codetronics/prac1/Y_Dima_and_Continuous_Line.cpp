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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    int min, max;
    if (arr[0] > arr[1])
    {
        min = arr[1];
        max = arr[0];
    }
    else
    {
        min = arr[0];
        max = arr[1];
    }
    for (int i = 0; i < n - 2; i++)
    {
        if ((arr[i] < arr[i + 1] && arr[i + 2] < min||(arr[i] > arr[i + 1] && arr[i + 2] > max)))
        {
            cout << "i" << i;
            flag = 1;
            break;
        }
        if(arr[i]<max) max = arr[i];
        if(arr[i]>min) min = arr[i];
    }
    if (flag)
        cout << "yes";
    else
        cout << "no";
    return 0;
}