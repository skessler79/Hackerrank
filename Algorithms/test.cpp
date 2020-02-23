#include <bits/stdc++.h>

using namespace std;

vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
	vector<int> placings;
	stack<int> st;

	st.push(scores[0]);

	for(int i = 1; i < scores.size(); i++)
	{
		if(scores[i] != scores[i-1])
		{
			st.push(scores[i]);
		}
	}

	for(int i = 0; i < alice.size(); i++)
	{
		while((alice[i] >= st.top()) && !st.empty()) 
		{
			st.pop();
			if(st.empty())
			{
				break;
			}
		}
		placings.push_back(st.size() + 1);
		cout << st.size() + 1 << endl;
	}

	for(int i = 0; i < placings.size(); i++)
	{
		cout << placings[i] << " ";
	}
	cout << endl;

    return placings;
}

int main()
{
	int m, n, temp;
	cin >> m;
	vector<int>scores;
	vector<int>alice;
	for(int i = 0; i < m; i++)
	{
		cin >> temp;
		scores.push_back(temp);
	}
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		alice.push_back(temp);
	}
	climbingLeaderboard(scores, alice);
}