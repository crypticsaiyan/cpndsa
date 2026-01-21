#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, n, v;
    cin >> n;
    int poweroftwo[31]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> t >> v;
        if (t == 1)
        {
            poweroftwo[v]++;
        }
        else if (t == 2)
        {
            // for (int j = 0; j < 30; j++)
            // {
            //     cout << poweroftwo[j] << " ";
            // }
            // cout << endl;

            int x = log2(v);
            for (int j = x; j >= 0; j--)
            {
                int req = v / pow(2,j);
                
                // cout << v << "x" << req << "req" << endl;
                
                if (poweroftwo[j] > req)
                    v = v - req * pow(2, j);
                else
                    v = v - poweroftwo[j] * pow(2, j);
                    // cout << "v is " << v << endl;
                if (v == 0)
                    break;
            }
            if (v == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}