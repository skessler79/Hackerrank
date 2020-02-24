#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100;

    if(c[0])
        energy -= 2;
    if(k == c.size())
    {
        return energy - 1;
    }

    for(int i = k; i != 0;)
    {
        energy--;
        if(c[i])
            energy -= 2;
        i += k;
        if(i >= c.size())
            i -= c.size();
    }

    cout << energy - 1 << endl;

    return energy - 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    int result = jumpingOnClouds(c, k);

    fout << result << "\n";

    fout.close();

    return 0;
}