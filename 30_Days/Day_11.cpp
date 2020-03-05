#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int max = -63;

    for(int i = 0; i < arr.size() - 2; i++)
    {
    	for(int j = 0; j < arr[i].size() - 2; j++)
    	{
    		int sum = 0;
    		sum += arr[i][j];
    		sum += arr[i][j + 1];
    		sum += arr[i][j + 2];
    		sum += arr[i + 1][j + 1];
    		sum += arr[i + 2][j];
    		sum += arr[i + 2][j + 1];
    		sum += arr[i + 2][j + 2];
    		if(sum > max)
	    	{
	    		max = sum;
	    	}
    	}
    }

    cout << max << endl;

    return 0;
}
