//https://nypc.github.io/2023/round1_1

#include<iostream>
#include<vector>
using namespace std;

int N; // 모든 모험가 직업의 수
int K; // 키워본 모험가 직업의 수	
int T;// 새로 키워볼 수 있는 모험가의 수

int main()
{
	vector<string> jobs;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string job;
		cin >> job;
		jobs.push_back(job);
	}

	cin >> K;
	for (int i = 0; i < K; i++)
	{
		string myjob;
		cin >> myjob;
		auto it = find(jobs.begin(), jobs.end(), myjob);  // 못찾으면 jobs.end()반환
		if (it != jobs.end())
		{
			jobs.erase(it);
		}
	}

	cout << jobs.size() << endl;

	for (auto it : jobs)
	{
		cout << it << endl;
	}
}