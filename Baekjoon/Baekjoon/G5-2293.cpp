#include<iostream>
#include<vector>
using namespace std;

int DP[1000001]{1};
int N, K;
vector<int> values;

int main()
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		int value;
		cin >> value;
		values.push_back(value);
	}

	for (int i = 1; i <= K; i++)
	{
		DP[i] = DP[i - 1];
		
		for (int j = 0; j < values.size(); j++)
		{
			if (values[j] == 1) continue;
			if (K % values[j] == 0) DP[i] += 1;
		}
	}

	cout << DP[K];
}