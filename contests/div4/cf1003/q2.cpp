#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int len = s.size();
        int count = 1;
        for (int j = 0; j < len - 1; j++)
        {
            if (s[j] == s[j + 1])
            {
                count = 1;
                break;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}