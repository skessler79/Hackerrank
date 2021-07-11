#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    // for(int i = 0; i < s.length() - 1; ++i)
    // {
    //     for(int j = i + 1; j < s.length(); ++j)
    //     {
    //         if(s[i] == s[j])
    //         {
    //             s.erase(s.begin() + j);
    //             s.erase(s.begin() + i);
    //             --i;
    //             break;
    //         }
    //     }
    // }
    sort(s.begin(), s.end());

    for(int i = 0; i < s.length() - 1; ++i)
    {
        if(s.length() == 0)
            break;
        if(s[i] == s[i + 1])
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            --i;
        }
    }

    if(s.length() <= 1)
        return "YES";
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";
    cout << result << "\n";

    fout.close();

    return 0;
}
