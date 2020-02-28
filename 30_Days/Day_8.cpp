#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
    	string name;
    	int num;
    	cin >> name >> num;
    	m.insert(make_pair(name, num));
    }

    string input;
    vector<string> output;

    while(cin >> input)
    {
    	map<string, int>::iterator itr = m.find(input);

    	if(itr == m.end())
    	{
    		puts("Not found");
    	}
    	else
    	{
    		cout << itr->first << "=" << itr->second << endl;
    	}
    }


    return 0;
}