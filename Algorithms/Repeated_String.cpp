#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long long repeatedString(string s, long long n) {
    long long count = 0;
    int numa = 0;

    long long repeats = n / s.length();
    long long remainder = n % s.length();

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a')
            numa++;
    }
    count = repeats * numa;

    for(long long i = 0; i < remainder; i++)
    {
        if(s[i] == 'a')
            count++;
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
