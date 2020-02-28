#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {
    int cost = 0;
    string p = "";

    for(int i = 0; i < s.length(); i++)
    {
        bool found = false;
        for(int j = 0; j < p.length(); j++)
        {
            if(s[i] == p[j])
            {
                found = true;
                break;
            }
        }
        p+=s[i];
        if(!found)
            cost++;
    }
    return cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
