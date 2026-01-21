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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char a[n], b[n];
        fo(i, n)
        {
            cin >> a[i];
        }
        fo(i, n)
        {
            cin >> b[i];
        }
        char x[n], y[n];
        fo(i, n)
        {
            if (i % 2)
            {
                x[i] = b[i];
            }
            else
            {
                x[i] = a[i];
            }
        }
        fo(i, n)
        {
            if (!(i % 2))
            {
                y[i] = b[i];
            }
            else
            {
                y[i] = a[i];
            }
        }
        // pa(p, n, x);
        // pa(p, n, y);
        int cx = 0, cy = 0;
        fo(i, n){
            if(x[i]=='0'){
                cx++;
            }
        }
        fo(i, n){
            if(y[i]=='0'){
                cy++;
            }
        }
        cx = min(int(ceil(float(n)/2)), cx);
        cy = min((n/2), cy);
        
        if(cx+cy>=n){
            py;
        }else{
            pn;
        }
    }
    return 0;
}