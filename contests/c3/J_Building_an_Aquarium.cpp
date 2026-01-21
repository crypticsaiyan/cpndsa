#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, n, v)             \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << v[i] << " ";    \
    }                           \
    cout << endl
#define pa(i, n, arr)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }                           \
    cout << endl
#define vi vector<int>

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        long long a[n];
        fo(i, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long s[n];
        fo(i, n)
        {
            if (i == 0)
            s[i] = a[0];
            else
            s[i] = a[i] + s[i - 1];
        }
        long long maxwater[n] = {0};
        fo(i, n-1){
            if(a[i]==a[i+1]){
                continue;
            }
            maxwater[i] = a[i+1]*(i+1) - s[i];
        }
        if(n>=3)
        maxwater[n-1] = maxwater[n-2];
        pa(i, n, a);
        pa(i, n, s);
        pa(i, n, maxwater);
        fo(i, n){
            if(x<maxwater[i]){
                cout << a[i] << endl;
                break;
            }
            if(a[i]==a[n-1]){
                cout << a[n-1]+(x - maxwater[n-1])/n<< endl;
                break;
            }
        }
    }
    return 0;
}