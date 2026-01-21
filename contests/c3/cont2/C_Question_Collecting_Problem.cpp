#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, v)                       \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cout << v[i] << " ";           \
    }                                  \
    cout << endl
#define pa(i, n, arr)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }                           \
    cout << endl
#define vi vector<int>

// string str; getline(cin, str);

bool comparator(pair<int, int> a, pair<int, int> b)
{
    return a.first == b.first ? a.second < b.second : a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> v(n);
        fo(i, n)
        {
            int x;
            cin >> x;
            v[i].first = x;
        }
        fo(i, n)
        {
            int x;
            cin >> x;
            v[i].second = x;
        }
        sort(v.begin(), v.end(), comparator);
        // fo(i, n){
        //     cout << v[i].first << " AND " << v[i].second << endl;
        // }
        long long b_temp = 0, ans = 0;
        fo(i, n){
            b_temp += v[i].second;
            if(v[i].first <= b_temp){
                b_temp = 0;
                ans = v[i].first;
            }
            else{
                ans += b_temp;
            }
            if(i!=0 && b_temp == v[i-1].first){
                b_temp = 0;
                ans = v[i-1].first;
            }
        }
        cout << ans << endl;
    }
    return 0;
}