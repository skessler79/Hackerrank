#include <bits/stdc++.h>

using namespace std;

// Complete the flippingBits function below.
unsigned int flippingBits(int n) {
    unsigned int flipped = ~n;
    return flipped;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        unsigned int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        unsigned int result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
