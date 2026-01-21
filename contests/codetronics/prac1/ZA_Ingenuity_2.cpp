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
        cin >> n;
        string s;
        cin >> s;
        int flagr = 0, flagh = 0;
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            pair<int, int> r = {0, 0};
            pair<int, int> h = {0, 0};
            int hcount = 0, vcount = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'N')
                {
                    hcount++;
                }
                else if (s[j] == 'S')
                {
                    hcount--;
                }
                else if (s[j] == 'E')
                {
                    vcount++;
                }
                else if (s[j] == 'W')
                {
                    vcount--;
                }
            }
            if (abs(hcount) % 2 == 1 || abs(vcount) % 2 == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                vector<char> ans;
                // 1 for R 0 for H
                int flagn = 1, flags = 1, flagw = 0, flage = 0;
                for (int j = 0; j < n; j++)
                {
                    if (s[j] == 'N')
                    {
                        if (flagn)
                        {
                            ans.push_back('R');
                            // cout << 'R';
                            r.first++;
                            flagn = 0;
                            // flags = 1;
                            flagr = 1;
                        }
                        else
                        {
                            ans.push_back('H');
                            // cout << 'H';
                            h.first++;
                            flagn = 1;
                            // flags = 0;
                            flagh = 1;
                        }
                    }
                    else if (s[j] == 'S')
                    {
                        if (flags)
                        {
                            ans.push_back('R');
                            r.first--;
                            // flagn = 0;
                            flags = 0;
                            flagr = 1;
                        }
                        else
                        {
                            ans.push_back('H');
                            h.first--;
                            // flagn = 1;
                            flags = 1;
                            flagh = 1;
                        }
                    }
                    if (s[j] == 'E')
                    {
                        if (flage)
                        {
                            ans.push_back('R');
                            r.second++;
                            flage = 0;
                            // flagw = 1;
                            flagr = 1;
                        }
                        else
                        {
                            ans.push_back('H');
                            h.second++;
                            flage = 1;
                            // flagw = 0;
                            flagh = 1;
                        }
                    }
                    else if (s[j] == 'W')
                    {
                        if (flagw)
                        {
                            ans.push_back('R');
                            r.second--;
                            flagw = 0;
                            // flage = 1;
                            flagr = 1;
                        }
                        else
                        {
                            ans.push_back('H');
                            h.second--;
                            flagw = 1;
                            // flage = 0;
                            flagh = 1;
                        }
                    }
                }
                // cout << r.first << " " << r.second << "and" << h.first << " " << h.second;
                if (flagh && flagr)
                {
                    for (char c : ans)
                    {
                        cout << c;
                    }
                }
                else
                    cout << "NO";
                cout << endl;
            }
        }
    }

    return 0;
}