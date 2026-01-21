#include <bits/stdc++.h>
using namespace std;

long long nC3(long long n)
{
    return n * (n - 1) * (n - 2) / 6;
}

long long nC2(long long n)
{
    return n * (n - 1) / 2;
}

long long nC1(long long n)
{
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<long long, long long> freq;
        for (int j = 0; j < n; j++)
        {
            long long x;
            cin >> x;
            freq[x]++;
        }

        long long ans = 0;
        // all same
        for (auto &entry : freq)
        {
            if (entry.second >= 3)
            {
                ans += nC3(entry.second);
            }
        }

        long long sum = 0;
        map<long long, long long> sumnC2;

        for (auto &entry : freq)
        {
            if (entry.second >= 2)
            {
                sum += nC2(entry.second);
            }
        }
        long long cumulative_sum = 0;
        for (auto &entry : freq)
        {
            cumulative_sum += nC2(entry.second);
            // cout << "sum" << sum << "cum: " << cumulative_sum << endl;
            sumnC2[entry.first] = sum - cumulative_sum;
        }
        // for(auto &entry : freq){
        //     cout << entry.first << "->" << sumnC2[entry.first] << " ";
        // }
        // cout << endl;
        
        // 1 diff
        for (auto &entry : freq)
        {
            if (entry.second >= 1)
            {
                ans += nC1(entry.second) * sumnC2[entry.first];
            }
        }
        cout << ans << endl;
    }

    return 0;
}