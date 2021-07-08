#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k) {
    if(s.length() + t.length() <= k)
    {
        return "Yes";
    }
    
    while(s[0] == t[0])
    {
        if(s.length() == 0 || t.length() == 0)
        {
            break;
        }
        s.erase(0, 1);
        t.erase(0, 1);
    }

    if(s.length() + t.length() == k)
    {
        return "Yes";
    }

    if(s.length() + t.length() < k)
    {
        if(((s.length() + t.length() - k) % 2) == 0)
            return "Yes";
        else
            return "No";
    }

    if(s.length() > t.length() + k)
    {
        return "No";
    }
    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";
    cout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
