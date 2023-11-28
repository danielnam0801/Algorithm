#include<iostream>
using namespace std;

long long int arr[101][101]{1};
int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (j == 1 || j == i) 
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}

	cout << arr[N][M];
}