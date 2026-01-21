#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define inputV(a, n) fo(i, n) cin >> a[i]
typedef long long ll;
typedef vector<long long> vl;
typedef vector<int> vi;
const int MOD = 1000000007;
const int MAXN = 2000001;

vector<int> v;

bool isPrime[MAXN];
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAXN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int findDist(int n)
{
    sieve();
    for (int i = 0; i < MAXN; i++)
    {
        if (isPrime[n + i])
            return i;
    }
}

void s(string &s, int n, int a, int b)
{
    int p = n + findDist(n);
    int i = 0;
    while (v[n - i - 1] <= p / 2)
    {
        v[i] = n - i;
        v[n - i - 1] = p - v[i];
        i++;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}