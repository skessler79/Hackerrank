#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int integer;
    double dub;
    string str, ws;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> integer >> dub;
    getline(cin >> ws, str);

    // Print the sum of both integer variables on a new line.
    cout << i + integer << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + dub << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    s = s + ws + str;
    cout << s << endl;

    return 0;
}