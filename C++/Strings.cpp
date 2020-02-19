#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    char ch1 = a[0];
    char ch2 = b[0];
    a[0] = ch2;
    b[0] = ch1;

    cout << a << " " << b;
  
    return 0;
}

