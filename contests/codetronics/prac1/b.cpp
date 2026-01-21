#include <bits/stdc++.h>
using namespace std;

//string str; getline(cin, str);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (i+1)*(arr[i]-1);
    }
    ans += n;
    cout << ans;
    return 0;
}