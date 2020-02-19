#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    vector<vector<int> > arr(n);
    vector<int> res;
    for(int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        arr[i] = vector<int>(size);
        for(int j = 0; j < size; j++)
        {
        	cin >> arr[i][j];
        }
    }

    for(int i = 0; i < q; i++)
    {
    	int row, col;
    	cin >> row >> col;
    	int result = arr[row][col];
    	res.push_back(result);
    }

    for (std::vector<int>::iterator i = res.begin(); i != res.end(); ++i)
    {
    	cout << *i << endl;
    }
       
    return 0;
}

