#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    cout << s;
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == s[i+1])
        {
            s.erase(s.begin() + i + 1);
            --i;
        }
        else if(s[i] == ' ')
        {
            s.erase(s.begin() + i);
            --i;
        }
    }
    if(s.length() == 26)
        return "pangram";

    return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
