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

void generateMaxFreq(vi &mfreqa, vi &a)
{
    int n = a.size();
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            count++;
        else
        {
            mfreqa[a[i-1]] = max(mfreqa[a[i-1]], count);
            count = 1;
        }
    }
    mfreqa[a[n-1]] = max(mfreqa[a[n-1]], count);
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
        vi a(n);
        vi b(n);
        vi count(2 * n + 1, 0);
        fo(i, n)
        {
            cin >> a[i];
        }
        fo(i, n)
        {
            cin >> b[i];
        }
        vi mfreqa(2*n+1, 0);
        vi mfreqb(2*n+1, 0);
        generateMaxFreq(mfreqa, a);
        generateMaxFreq(mfreqb, b);
        int maxi = mfreqa[1]+mfreqb[1];
        for (int i = 2; i < 2*n+1; i++)
        {
            maxi = max(mfreqa[i]+mfreqb[i], maxi);
        }
        cout << maxi << endl; 
    }
    return 0;
}