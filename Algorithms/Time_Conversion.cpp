#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    if(s[8] == 'P')
    {
        s.pop_back();
        s.pop_back();
        int hour = stoi(s);
        if(!(s[0] == '1' && s[1] == '2'))
            hour += 12;
        s.erase(0, 2);
        string hr = to_string(hour);
        s = hr + s;
    }
    else
    {
        s.pop_back();
        s.pop_back();
        if(s[0] == '1' && s[1] == '2')
        {
            s.erase(0, 2);
            s = "00" + s;
        }
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
