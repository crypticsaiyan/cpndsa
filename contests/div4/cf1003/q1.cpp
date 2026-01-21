#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int len = s.size();
        for (int j = 0; j < len; j++)
        {
            if(j == len-2){
                cout << "i" << endl;
                break;
            }else{
                cout << s[j];
            }
        }
        
    }
    
    return 0;
}