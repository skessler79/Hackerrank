#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    	cin >> v[i];

    cin >> q;
    vector<int> queries(q);
    for(int i = 0; i < q; i++)
    	cin >> queries[i];

    for(int i = 0; i < q; i++)
    {
    	int lower;
    	lower = lower_bound(v.begin(), v.end(), queries[i]) - v.begin() + 1;
    	if(v[lower - 1] == queries[i])
    		cout << "Yes " << lower << endl;
    	else
    		cout << "No " << lower << endl;
    	
    }
    cout << endl;

    return 0;
}
