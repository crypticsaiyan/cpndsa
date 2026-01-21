#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int whenReach(int toreach, int x, int dir, int top)
{
    if (toreach == x)
        return 0;
    else if (toreach > x)
    {
        // upwards positive and downwards negative
        if (dir > 0)
            return toreach - x;
        else
            return 2 * (x - 1) + toreach - x;
    }
    else
    {
        if (dir < 0)
            return x - toreach;
        else
            return 2 * (top - x) + x - toreach;
    }
}

int sgn(int x)
{
    if (x == 0)
        return 0;
    else if (x > 0)
        return 1;
    else
        return -1;
}

int elepos(int t, int top){
    int ind = t%(2*top-2);
    if(ind<top) return ind +1;
    else return top - (ind - top + 1);
}

int eledir(int t, int top){
    if((t/(top-1))%2==1) return -1;
    else return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, top;
    cin >> n >> top;
    for (int i = 0; i < n; i++)
    {
        int s, f, t;
        cin >> s >> f >> t;
        // total time = time by elevator to reach s + time by s to reach f
        if (s == f)
        {
            cout << t << endl;
        }
        else
        {
            int e = elepos(t, top);
            // cout << "ele"<<e << endl;
            cout << t + whenReach(s,e,eledir(t,top),top) + whenReach(f,s,eledir(t+whenReach(s,e,eledir(t,top),top), top), top) << endl;
        }
    }

    return 0;
}