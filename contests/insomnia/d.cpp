#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define inputV(a, n) fo(i, n) cin >> a[i]
typedef long long ll;
typedef vector<long long> vl;
typedef vector<int> vi;
const int MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi p(n + 1);
        vi s(n + 1, 0);

        cout << "? 1 2 3" << endl;
        cout.flush();
        cin >> s[1];

        cout << "? 1 2 4" << endl;
        cout.flush();
        cin >> s[2];

        cout << "? 1 3 4" << endl;
        cout.flush();
        cin >> s[3];

        cout << "? 2 3 4" << endl;
        cout.flush();
        cin >> s[4];

        p[1] = (s[1] + s[2] + s[3] - 2 * s[4]) / 3;
        // p[2] = (s[1] + s[3] + s[4] - 2 * s[2]) / 3;
        p[2] = p[1] - s[3] + s[4];
        p[3] = s[1] - p[1] - p[2];
        p[4] = s[2] - p[1] - p[2];

        for (int i = 5; i <= n; i++)
        {
            cout << "? 1 2 " << i << endl;
            cout.flush();
            cin >> s[i];
            p[i] = s[i] - p[1] - p[2];
        }

        cout << "! ";
        for (int i = 1; i <= n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
        cout.flush();
    }
}