#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'surfaceArea' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY A as parameter.
 */

int surfaceArea(vector<vector<int>> A) {
    vector<vector<int>> area(A.size());
    int sum = 2 * A.size() * A[0].size();

    for(int i = 0; i < A.size(); ++i)
    {
        for(int j = 0; j < A[0].size(); ++j)
        {
            // Check area around rows
            if(i == 0 || i == A.size() - 1)
            {
                sum += A[i][j];
                if(i == 0 && A.size() == 1)
                {
                    sum += A[i][j];
                    cout << sum << endl;
                }
                else if(i == 0)
                {
                    if(A[i][j] > A[i+1][j])
                        sum += A[i][j] - A[i+1][j];
                }
                else if(i == A.size() - 1)
                {
                    if(A[i][j] > A[i-1][j])
                        sum += A[i][j] - A[i-1][j];
                }
            }
            else
            {
                if(A[i][j] > A[i+1][j])
                    sum += A[i][j] - A[i+1][j];
                if(A[i][j] > A[i-1][j])
                    sum += A[i][j] - A[i-1][j];
            }
                
            // Check area around columns
            if(j == 0 || j == A[0].size() - 1)
            {
                sum += A[i][j];
                if(j == 0 && A[0].size() == 1)
                {
                    sum += A[i][j];
                }
                else if(j == 0)
                {
                    if(A[i][j] > A[i][j+1])
                        sum += A[i][j] - A[i][j+1];
                }
                else if(j == A[0].size() - 1)
                {
                    if(A[i][j] > A[i][j-1])
                        sum += A[i][j] - A[i][j-1];
                }
            }
            else
            {
                if(A[i][j] > A[i][j+1])
                    sum += A[i][j] - A[i][j+1];
                if(A[i][j] > A[i][j-1])
                    sum += A[i][j] - A[i][j-1];
            }
            
        }
    }

    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int H = stoi(first_multiple_input[0]);

    int W = stoi(first_multiple_input[1]);

    vector<vector<int>> A(H);

    for (int i = 0; i < H; i++) {
        A[i].resize(W);

        string A_row_temp_temp;
        getline(cin, A_row_temp_temp);

        vector<string> A_row_temp = split(rtrim(A_row_temp_temp));

        for (int j = 0; j < W; j++) {
            int A_row_item = stoi(A_row_temp[j]);

            A[i][j] = A_row_item;
        }
    }

    int result = surfaceArea(A);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
