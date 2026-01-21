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
    for (int i = 0; i < t; i++)
    {
        int flag = 0;
        cin >> n;
        long long arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            arr[j] = arr[j] % 10;
        }
        int hash[10] = {0};
        for (int j = 0; j < n; j++)
        {
            hash[arr[j]]++;
        }
        // all same
        for (int j = 0; j < 10; j++)
        {
            if (hash[j] >= 3 && (3 * j) % 10 == 3)
                flag = 1;
        }

        // 2same 1 diff
        for (int j = 0; j < 10; j++)
        {
            if (hash[j] >= 2){
                for (int k = 0; k < 10; k++)
                {
                    if(hash[k]>=1 && j!=k){
                        if((2*j+k)%10==3){
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
        // all diff
        for (int j = 0; j < 10; j++)
        {
            if (flag)
                break;
            for (int k = j + 1; k < 10; k++)
            {
                if (flag)
                    break;
                for (int l = k + 1; l < 10; l++)
                {
                    if (hash[j] != 0 && hash[k] != 0 && hash[l] != 0)
                    {
                        if ((j + k + l) % 10 == 3)
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}