//https://nypc.github.io/2023/round1_1

#include<iostream>
#include<vector>
using namespace std;

int N; // ��� ���谡 ������ ��
int K; // Ű���� ���谡 ������ ��	
int T;// ���� Ű���� �� �ִ� ���谡�� ��

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
		auto it = find(jobs.begin(), jobs.end(), myjob);  // ��ã���� jobs.end()��ȯ
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