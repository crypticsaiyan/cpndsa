#include <bits/stdc++.h>
using namespace std;

// string str; getline(cin, str);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> vec = {2, 1, 2, 4, 2, 1212, 42};
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(3);
    // for(vector<int>::iterator it = vec.begin(); it < vec.end(); it++){
    //     cout << *(it) << " ";
    // }
    // for(auto it = vec.begin(); it < vec.end(); it++)
    // {
    //     cout << *(it);
    // }
    // vector<int> vec2 = {312312,213123123,312312312,3,123,123,12,3};
    // vec.erase(vec.begin() + 4, vec.end());
    // vec.insert(vec.begin()+2, vec2.begin(), vec2.end());
    // sort(vec.begin(), vec.end(), greater<int>());
    // for(auto it: vec)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // cout << "builtin_popcount function: " << __builtin_popcount(423);
    // string test = {"I am Rahul."};
    // cout << test << endl;
    // sort(test.begin(), test.end());
    // cout << test;
    // cout << "miminum element in the vector: " << *min_element(vec.begin(), vec.end()) << endl;
    // cout << "max element in the vector: " << *max_element(vec.begin(), vec.end());
    vector<int> sortedvec = {1, 2, 3, 4, 4, 4, 5, 6};
    int upperindex = upper_bound(sortedvec.begin(), sortedvec.end(), 4)-sortedvec.begin(); // returns the first index which has the value 4
    int lowerindex = lower_bound(sortedvec.begin(), sortedvec.end(), 4)-sortedvec.begin(); // returns the next largest index
    for(auto it : sortedvec)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "lower: " << lowerindex << endl
         << "upper: " << upperindex;
    return 0;
}