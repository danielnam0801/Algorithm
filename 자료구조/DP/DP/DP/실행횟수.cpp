#include<iostream>
using namespace std;

int dp[100] = { 1, 1 };
int jagu(int n)
{
	if (n < 2)
		return dp[n];
	else
	{
		if(dp[n] == 0)
		dp[n] = 1 + jagu(n - 1) + jagu(n - 2);
		return dp[n];
	}
}

int main()
{
	int n;
	cin >> n;
	cout << jagu(n);
}