#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s) {
    int max1 = 0, max2 = 0;
    map<char, int> m;

    for(int i = 0; i < s.length(); i++)
    {
        map<char, int>::iterator itr = m.find(s[i]);
        if(itr == m.end())
        {
            m.insert(make_pair(s[i], 1));
        }
        else
        {
            itr->second++;
        }
    }

    for(map<char, int>::iterator itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second > max1)
        {
            max2 = max1;
            max1 = itr->second;
        }
        else if(itr->second > max2)
        {
            max2 = itr->second;
        }
    }
    return max1 + max2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

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
