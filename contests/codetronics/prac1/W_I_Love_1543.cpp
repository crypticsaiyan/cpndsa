#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int countNum(vector<string> v, int n, int m, int start)
{
    vector<char> counter;
    for (int i = start; i < m; i++)
    {
        counter.push_back(v[start][i]);
    }
    for (int i = start + 1; i < n; i++)
    {
        counter.push_back(v[i][m - 1]);
    }
    for (int i = m - 2; i >= start; i--)
    {
        counter.push_back(v[n - 1][i]);
    }
    for (int i = n - 2; i > start; i--)
    {
        counter.push_back(v[i][start]);
    }
    // for (int i = 0; i < size(counter); i++)
    // {
    //     cout << counter[i] << " ";
    // }
    // cout << endl;
    int count = 0;
    // cout << "size of counter: " << size(counter) << endl;
    if (size(counter) >= 4)
    {
        for (int i = 0; i < size(counter); i++)
        {
            if (i < size(counter) - 3)
            {
                if (counter[i] == '1' && counter[i + 1] == '5' && counter[i + 2] == '4' && counter[i + 3] == '3')
                    count++;
                    // cout << "yes";
            }
            else if (i == size(counter) - 3)
            {
                if (counter[i] == '1' && counter[i + 1] == '5' && counter[i + 2] == '4' && counter[0] == '3')
                    count++;
            }
            else if (i == size(counter) - 2)
            {
                if (counter[i] == '1' && counter[i + 1] == '5' && counter[0] == '4' && counter[1] == '3')
                    count++;
            }
            else if (i == size(counter) - 1)
            {
                if (counter[i] == '1' && counter[0] == '5' && counter[1] == '4' && counter[2] == '3')
                    count++;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, m, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        vector<string> v;
        for (int j = 0; j < n; j++)
        {
            string temp;
            cin >> temp;
            v.push_back(temp);
        }
        int ans = 0;
        for (int i = 0; i < min(ceil((float)n / 2), ceil((float)m / 2)); i++)
        {
            ans += countNum(v, n - i, m - i, i);
        }
        cout << ans << endl;
    }
    return 0;
}