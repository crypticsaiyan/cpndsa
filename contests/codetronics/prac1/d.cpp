#include <bits/stdc++.h>
using namespace std;

//string str; getline(cin, str);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int r=0,b=0,y=0,g=0,ri,bi,yi,gi;
    for (int i = 0; i < size(s); i++)
    {
        if(s[i]=='R'){
            ri = i%4;
        }
        else if(s[i]=='B'){
            bi = i%4;
        }
        else if(s[i]=='Y'){
            yi = i%4;
        }
        else if(s[i]=='G'){
            gi = i%4;
        }
    }
    for (int i = ri; i < size(s); i+=4)
    {
        if(s[i]=='!'){
            r++;
        }
    }
    for (int i = bi; i < size(s); i+=4)
    {
        if(s[i]=='!'){
            b++;
        }
    }
    for (int i = yi; i < size(s); i+=4)
    {
        if(s[i]=='!'){
            y++;
        }
    }
    for (int i = gi; i < size(s); i+=4)
    {
        if(s[i]=='!'){
            g++;
        }
    }
    cout << r << " " << b << " " << y << " " << g;
    
    return 0;
}