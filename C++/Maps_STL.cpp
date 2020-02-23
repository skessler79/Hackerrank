#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int count;
	map<string, int> m;
	vector<int> output;
	cin >> count;

	for(int i = 0; i < count; i++)
	{
		int op, value;
		string name;
		cin >> op >> name;
		map<string, int>::iterator itr = m.find(name);
		switch(op)
		{
			case 1:
				cin >> value;
				
				if(itr == m.end())
					m.insert(make_pair(name, value));
				else
					itr->second = itr->second + value;
				break;

			case 2:
				itr->second = 0;
				break;

			case 3:
				if(itr == m.end())
					output.push_back(0);
				else
					output.push_back(itr->second);
				break;
		}
	}

	for(int i = 0; i < output.size(); i++)
	{
		cout << output[i] << endl;
	}

    return 0;
}



