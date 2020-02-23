#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
	int count = 0;
	if(s.length() == 1)
		return s;

	for(int i = 0; i < s.length() - 1; i++)
	{
		if(s[i] == s[i + 1])
		{
			s.erase(s.begin() + i + 1);
			s.erase(s.begin() + i);
			i--;
			count++;
			if(s.length() == 0)
				break;
		}
	}

	if(count == 0)
		return s;

	if(s.length() == 0)
		return "Empty String";
	return superReducedString(s);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
