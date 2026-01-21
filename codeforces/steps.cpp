#include <iostream>
using namespace std;

long long C_rec(int n, int m) {
    // guards / pruning
    if (n < 0 || m < 0) return 0;
    if ((n == 3 || n==2 || n==1) && m == 1) return 1;
    if (m == 0) return 0;              // n>0 here
    if (m > n) return 0;               // too many jumps
    if (3*m < n) return 0;             // jumps too small to reach n

    // recurrence
    return C_rec(n-1, m-1) + C_rec(n-2, m-1) + C_rec(n-3, m-1);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << C_rec(n, m) << "\n";
    return 0;
}