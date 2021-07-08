#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    vector<int> arr;
    arr.push_back(1);

    for(int i = 2; i <= n; ++i)
    {
        for(int j = 0; j < arr.size(); ++j)
        {
            arr[j] *= i;
            if(arr[j] < 10)
            {
                continue;
            }

            if(j == arr.size() - 1)
            {
                arr.push_back(0);
                j++;
            }
            arr[j] += arr[j-1] / 10;
            arr[j-1] %= 10;
        }
    }

    for(int i = arr.size() - 1; i >= 0; --i)
    {
        cout << arr[i];
    }

    cout << endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

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
