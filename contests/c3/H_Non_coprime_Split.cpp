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
bool isPrime(int n){
    for (int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int whichPrime(int n){
    for (int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        return i;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (!(b % 2))
        {
            if (b == 2)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << b / 2 << " " << b / 2 << endl;
            }
        }
        else
        {
            if (a != b)
            {
                if (b == 3)
                {
                    cout << "-1" << endl;
                }
                else
                {
                    cout << (b - 1) / 2 << " " << (b - 1) / 2 << endl;
                }
            }
            else{
                //if prime no ans
                //if not prime ans
                if(isPrime(b)){
                    cout << "-1" << endl;
                }
                else{
                    cout << whichPrime(b) << " " << b - whichPrime(b) << endl;
                }
            }
        }
    }
    return 0;
}