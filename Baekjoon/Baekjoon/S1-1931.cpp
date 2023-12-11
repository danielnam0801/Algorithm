#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N, Cnt = 0;
	vector<pair<int, int>> v;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int start;
		int end;
		cin >> start >> end;
		v.push_back({ end, start });
	}
	
	sort(v.begin(), v.end());

	Cnt = 1;
	int curIdx = 0;
	for (int i = 1; i < N; i++)
	{
		if (v[curIdx].first <= v[i].second)
		{
			curIdx = i;
			Cnt++;
		}
	}

	cout << Cnt;
}