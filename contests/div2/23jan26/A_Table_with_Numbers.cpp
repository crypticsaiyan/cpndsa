#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)             \
    for (auto x: v) \
    {                           \
        cout << x << " ";    \
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
      int n, h, l;
      cin >> n >> h >> l;
      int arr[n];
      fo(i, n){
        cin >> arr[i];
      }
      sort(arr, arr+n);
      int maxi = max(h, l);
      int mini = min(h ,l);
      int i = 0;
      while(arr[i]<= maxi){
        i++;
      }
      i--;
      int j = 0;
      int ans = 0;
      while(arr[j]<=mini && j < i){
        j++;
        i--;
        ans++;
      }
      cout << ans << endl;
    }
    return 0;
}