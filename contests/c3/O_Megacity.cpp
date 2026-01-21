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

float radius(pair<int, int> p){
    return sqrt(p.first*p.first + p.second*p.second);
}

bool comparator(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2){
    return (p1.first.first*p1.first.first + p1.first.second*p1.first.second) < (p2.first.first*p2.first.first + p2.first.second*p2.first.second);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s, x, y, p;
    cin >> n >> s;
    vector<pair<pair<int, int>, int>> v;
    int m = n;
    while(n--){
        cin >> x >> y >> p;
        v.push_back({{x,y}, p});
    }
    sort(v.begin(), v.end(), comparator);
    // for (const auto &element : v) {
    //     cout << "((" << element.first.first << ", " << element.first.second << "), " << element.second << ")" << endl;
    // }
    int pop = s;
    // cout << s;
    fo(i, m){
        // cout << "sec: " << v[0].second << endl;
        pop+=v[i].second;
        // cout << "pop: " << pop << endl;
        if(pop>=1000000){
            cout << fixed << setprecision(8)<< radius(v[i].first);
            break;
        }
    }
    if(pop<1000000){
        cout << "-1";
    }
    return 0;
}