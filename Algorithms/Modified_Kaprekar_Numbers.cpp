#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    vector<long long> arr;

    for(int i = p; i <= q; ++i)
    {
        if(i == 1)
        {
            arr.push_back(1);
            continue;
        }
        int digits = 0;
        long long num = (long long)i * i;
        while(num != 0)
        {
            num = num / 10;
            ++digits;
        }

        num = (long long)i * i;
        long long num1 = 0;
        long long num2 = 0;

        if(digits % 2 == 0)
        {
            num1 = num / pow(10, digits / 2);
            num2 = num % (long long)pow(10, digits / 2);
        }
        else
        {
            num1 = num / pow(10, (digits / 2) + 1);
            num2 = num % (long long)pow(10, (digits / 2) + 1);
        }

        if(num1 + num2 == i)
        {
            arr.push_back(i);
        }

        // cout << digits << endl << num1 << endl << num2 << endl;
    }

    if(arr.size() == 0)
    {
        cout << "INVALID RANGE" << endl;
    }
    for(int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

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
