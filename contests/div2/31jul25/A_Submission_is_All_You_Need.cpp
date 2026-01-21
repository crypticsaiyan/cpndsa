#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(i, v)             \
    for (int i = 0; i < v.size(); i++) \
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
      cin >> n;
      int arr[n];
      int sum = 0, c0=0, c1=0;
      fo(i, n){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i]==0) c0++;
        if(arr[i]==1) c1++;
      }
      sum += c0;
      cout << sum << endl;
    }
    return 0;
}