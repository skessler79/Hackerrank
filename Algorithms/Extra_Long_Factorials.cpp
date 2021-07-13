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
    vector<int> num = {1};
    int carry = 0;

    while(n)
    {
        for(int i = 0; i < num.size(); ++i)
        {
            num[i] *= n;
            num[i] += carry;
            carry = 0;

            if(num[i] >= 10)
            {
                if(i == num.size() - 1)
                {
                    num.push_back(num[i] / 10);
                    if(num[i+1] >= 10)
                    {
                        num.push_back(num[i+1] / 10);
                        num[i+1] = num[i+1] % 10;
                    }

                    num[i] = num[i] % 10;
                    break;
                }
                else
                {
                    carry += num[i] / 10;
                    num[i] = num[i] % 10;
                }               
            }
        }
        --n;
    }

    for(int i = num.size() - 1; i >= 0; --i)
        cout << num[i];
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
