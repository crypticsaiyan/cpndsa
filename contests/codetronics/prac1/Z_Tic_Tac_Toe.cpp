#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> v;
    for (int i = 0; i < 11; i++)
    {
        string s;
        getline(cin, s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        if (!s.empty())
            v.push_back(s);
    }
    // for (const auto &row : v)
    // {
    //     cout << row << '\n';
    // }
    int n, m;
    cin >> n >> m;
    n--;
    m--;
    int x = n % 3;
    int y = m % 3;
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[x * 3 + i][y * 3 + j] == '.')
            {
                flag = 1;
                v[x * 3 + i][y * 3 + j] = '!';
            }
        }
    }
    if (!flag)
    {
        for (int i = 0; i < size(v); i++)
        {
            for (int j = 0; j < size(v[i]); j++)
            {
                if (v[i][j] == '.')
                    v[i][j] = '!';
            }
        }
    }
    int i = 1;
    // for (const auto &row : v)
    // {
    //     cout << row << '\n';
    //     if (i == 3 || i == 6)
    //         cout << endl;
    //     i++;
    // }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << v[i][j];
            if(j==2||j==5) cout << " ";
        }
        cout << endl;
        if (i == 2 || i == 5)
            cout << endl;
    }
    
    return 0;
}