#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int toNum(char s)
{
    return int(s) - 97;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        int hash[26][26] = {0};
        for (int i = 0; i < n - 1; i++)
        {
            if (i <= n - 3 && s[i] == s[i + 1] && s[i + 1] == s[i + 2])
            {
                if (i <= n - 4 && s[i + 2] == s[i + 3])
                {
                    flag = 1;
                    break;
                }
                else
                    continue;
            }
            hash[toNum(s[i])][toNum(s[i + 1])]++;
        }
        if (!flag)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (hash[i][j] >= 2)
                    {
                        flag = 1;
                        break;
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