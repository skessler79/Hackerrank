#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the sumXor function below.
long sumXor(long long n) {
    long count = 0;
    while(n)
    {
        if(n%2 == 0)
            count++;
        n /= 2;
    }

    return pow(2, count);
    /*
    long count = 0;
    for(long long i = 0; i <= n; i++)
    {
        if(n + i == (n^i))
            count++;
    }
    return count;
    */
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    long long n = stol(ltrim(rtrim(n_temp)));

    long result = sumXor(n);

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
