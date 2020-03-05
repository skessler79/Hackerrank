#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int max = 0, total = 0;

    while(n > 0)
    {
    	int remainder = n % 2;
    	n = n / 2;

    	if(remainder)
    	{
    		total++;
    		if(total > max)
    			max = total;
    	}
    	else
    		total = 0;
    }

    cout << max << endl;

    return 0;
}
