#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    int a;
    vector<int> arr;
    char ch;
    stringstream ss(str);
    ss >> a;
    arr.push_back(a);
	while(ss >> ch)
    {
        ss >> a;
        arr.push_back(a);
    }
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

