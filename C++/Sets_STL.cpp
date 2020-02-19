#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    vector<int> type(q);
    vector<int> num(q);
    set<int> s;

    for(int i = 0; i < q; i++)
    {
    	cin >> type[i] >> num[i];
    }   

    for(int i = 0; i < q; i++)
    {
    	if(type[i] == 1)
    		s.insert(num[i]);
    	else if(type[i] == 2)
    		s.erase(num[i]);
    	else
    	{
    		set<int>::iterator itr = s.find(num[i]);
    		if(itr == s.end())
    			cout << "No\n";
    		else
    			cout << "Yes\n";
    	}
    }

    return 0;
}
