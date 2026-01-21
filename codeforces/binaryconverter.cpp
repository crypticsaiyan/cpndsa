#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    string ans;
    while (num>0)
    {
        if(num%2){
            ans+='1';
        }else{
            ans+='0';
        }
        num/=2;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}
