#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, q;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        pair<int, int> p;
        map<int, pair<int, int>> m;
        cin >> n;
        int arr[n], hash[n] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 1; j < n; j++)
        {
            hash[j] = hash[j - 1];
            m[hash[j]] = m[hash[j-1]];
            if (arr[j - 1] != arr[j])
            {
                hash[j]++;
                m[hash[j]] = {j, j + 1};
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << hash[i]<< " ";
        // }cout << endl;
        
        cin >> q;
        while(q--){
            int l, r;
            cin >> l >> r;
            if(hash[l-1]==hash[r-1]) cout << "-1 -1" << endl;
            else cout << m[hash[r-1]].first << " " << m[hash[r-1]].second << endl;
        }
        cout << endl;
    }

    return 0;
}