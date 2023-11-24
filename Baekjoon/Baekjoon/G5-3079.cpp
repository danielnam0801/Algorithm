//https://www.acmicpc.net/problem/3079 입국심사

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long M, N;
long long low, high, mid;

vector<long long> times;

int main()
{
	cin >> M >> N;

	for (int i = 0; i < M; i++)
	{
		long long time;
		cin >> time;
		times.push_back(time);
	}
	
	sort(times.begin(), times.end());
	
	low = 0;
	high = times.front() * N;

	while (low <= high)
	{
		mid = (low + high) / 2;
		
		long long people = 0;
		for (const auto& time : times)
		{
			people += mid / time;
		}

		if (people >= N)
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	cout << low;
}
