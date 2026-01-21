// #include <bits/stdc++.h>
// using namespace std;

// // string str; getline(cin, str);

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t, n;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> n;
//         string bin;
//         cin >> bin;
//         // cout << n << "," << bin << endl;
//         long long zero[n] = {0}, one[n] = {0};
//         long long count0 = 0, count1 = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (bin[j] == '0')
//             {
//                 count0++;
//                 zero[j] = count0;
//             }
//             else
//             {
//                 zero[j] = count0;
//             }
//         }
//         for (int j = n - 1; j >= 0; j--)
//         {
//             if (bin[j] == '1')
//             {
//                 count1++;
//                 one[j] = count1;
//             }
//             else
//             {
//                 one[j] = count1;
//             }
//         }
//         long long zerob[n], oneb[n], c0 = 0, c1 = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (bin[j] == '1')
//             {
//                 c1++;
//                 oneb[j] = c1;
//             }
//             else
//             {
//                 oneb[j] = c1;
//             }
//         }
//         for (int j = n - 1; j >= 0; j--)
//         {
//             if (bin[j] == '0')
//             {
//                 c0++;
//                 zerob[j] = c0;
//             }
//             else
//             {
//                 zerob[j] = c0;
//             }
//         }
//         long long sum[n];
//         for (int j = 0; j < n; j++)
//         {
//             if (zero[j] != 0)
//                 zero[j] = zero[j] - 1;
//             if (one[j] != 0)
//                 one[j] = one[j] - 1;
//         }

//         for (int j = 0; j < n; j++)
//         {
//             sum[j] = zero[j] + one[j];
//         }
//         long long ans = 0, index;
//         for (int j = 0; j < n; j++)
//         {
//             if (sum[j] >= ans)
//             {
//                 ans = sum[j];
//                 index = j;
//             }
//         }
//         for (int j = 0; j < n; j++)
//         {
//             if (zerob[j] != 0)
//                 zerob[j] = zerob[j] - 1;
//             if (oneb[j] != 0)
//                 oneb[j] = oneb[j] - 1;
//         }
//         long long sum2[n];

//         for (int j = 0; j < n; j++)
//         {
//             sum2[j] = zerob[j] + oneb[j];
//         }

//         long long ans2 = *max_element(sum2, sum2 +n);
//         // for (int j = 0; j < n; j++)
//         // {
//         //     cout << one[j] << " ";
//         // }
//         // cout << endl;
//         // for (int j = 0; j < n; j++)
//         // {
//         //     cout << zero[j] << " ";
//         // }
//         // cout << endl;
//         cout << max(ans, ans2) << endl;
//         // if (zero[index] > 1 && one[index] > 1 || zero[index] == 1 && one[index] == 1)
//         // {
//         //     cout << ans - 2 << endl;
//         // }
//         // else
//         // {
//         //     cout << ans - 1 << endl;
//         // }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define inputV(a, n) fo(i, n) cin >> a[i]
typedef long long ll;
typedef vector<long long> vl;
typedef vector<int> vi;
const int MOD = 1000000007;

int getScore(string &s)
{
    int score = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            score++;
    }
    return score;
}

void processString(string &s)
{
    vi v;
    fo(i, s.size()) v.push_back(s[i]);
    string temp = "";
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (v[i + 1] == v[i - 1] && v[i + 1] != v[i])
        {
            v.erase(v.begin()+i);
        }
    }
    // fo(i, v.size()) cout << v[i] << " ";
    fo(i, v.size())
    {
        temp += v[i];
    }
    s = temp;
    // cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Special case for n <= 2
        if (n <= 2)
        {
            cout << getScore(s) << endl;
        }
        else
        {
            processString(s);
            cout << getScore(s) << endl;
        }
    }
}