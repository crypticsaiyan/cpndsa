#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 1;
    for (int i = k - 1; i < n - 1; i++)
    {
        if (arr[i + 1] == arr[i])
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        int ans = k-1;
        for (int i = k-2; i >=0; i--)
        {
            if(arr[i]==arr[k-1]){
                ans--;
            }else{
                break;
            }
        }
        cout << ans;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}