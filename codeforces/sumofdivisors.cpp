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

int f(int n)
{
    // sum of all divisors of n
    int sum = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (!(n % i))
        {
            if (i*i == n)
                sum += i;
            else
                sum += i + (n / i);
        }
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int ans=0;
    fo(i, n){
        ans+= f(i+1);
    }
    cout << ans;
    return 0;
}