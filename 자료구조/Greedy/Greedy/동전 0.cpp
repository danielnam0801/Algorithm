#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N, K, cnt = 0;
	vector<int> coins;

	cin >> N >> K;
	
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		coins.push_back(num);
	}

	for (int i = N-1; i >= 0; i--)
	{
		if (K / coins[i] == 0) continue;
		cnt += K / coins[i];
		K %= coins[i];
	}
	cout << cnt;
}