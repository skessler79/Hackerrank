#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int count = 0;

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool symbol = false;

    for(int i = 0; i < n; i++)
    {
        if(isupper(password[i]))
            upper = true;
        else if(islower(password[i]))
            lower = true;
        else if(isdigit(password[i]))
            digit = true;
        else
            symbol = true;
    }

    count = 4-(upper + lower + digit + symbol);

    if(n + count < 6)
        return 6 - n;
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
