#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
	int num_sos = s.length() / 3;
	int num_err = 0;

	for(int i = 0; i < s.length(); i+=3)
	{
		if(s[i] != 'S')
			num_err++;
		if(s[i+1] != 'O')
			num_err++;
		if(s[i+2] != 'S')
			num_err++;
	}
	return num_err;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
