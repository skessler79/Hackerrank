#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    int len = s.length();
    int rows = ceil(sqrt(len));
    vector<string> arr(rows);

    int counter = 0;
    for(int i = 0; i < len; ++i)
    {
        arr[counter] += s[i];
        ++counter;

        if(counter >= rows)
            counter = 0;
    }

    string result = "";

    for(string str : arr)
        result += str + " ";
    
    result.erase(result.size() - 1);

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";
    cout << result << "\n";

    fout.close();

    return 0;
}
