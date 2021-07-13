#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'anagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int anagram(string s) {
    if(s.length() % 2 != 0)
        return -1;

    int count = 0;
    string str1 = s.substr(0, (int)(s.length() / 2));
    string str2 = s.substr((int)(s.length() / 2), (int)(s.length() / 2));
    int arr1[26] = {0};
    int arr2[26] = {0};
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i = 0; i < str1.length(); ++i)
    {
        ++arr1[str1[i] - 97];
        ++arr2[str2[i] - 97];
    }

    for(int i = 0; i < 26; ++i)
    {
        count += abs(arr1[i] - arr2[i]);
    }
    return count / 2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    int num;
    cin >> num;

    for(int i = 0; i < num; ++i)
    {
        cin >> q_temp;
        int result = anagram(q_temp);
        fout << result << "\n";
        cout << result << "\n";
    }

    fout.close();

    return 0;
}
