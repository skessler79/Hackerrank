#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
