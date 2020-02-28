#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}

	for(int i = 0; i < v.size(); i++)
	{
		for(int j = 0; j < v[i].length(); j+=2)
		{
			cout << v[i][j];
		}
		cout << " ";
		for(int j = 1; j < v[i].length(); j+=2)
		{
			cout << v[i][j];
		}
		cout << endl;
	}

    return 0;
}
