#include <iostream>
using namespace std;

int main(){
    int arr[3] = {2, 3, 4};
    int *ptr = arr;
    cout << *(ptr +1);
    return 0;
}