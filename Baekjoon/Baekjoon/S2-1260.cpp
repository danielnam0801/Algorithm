#include<vector>
#include<iostream>
#include<queue>

using namespace std;

int N, M, V;
vector<bool> visited;
vector<vector<int>> vec;
queue<int> q;

void DFS(int v)
{
	visited[v] = true;
	cout << v << " ";

	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[v][i] == 1 && visited[i] == false)
		{
			DFS(i);
		}
	}
}

void BFS(int v)
{
	q.push(v);
	visited[v] = true;

	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		cout << now << " ";

		for (int i = 0; i <= N; i++)
		{
			if (vec[now][i] == 1 && visited[i] == false)
			{
				q.push(i);
				visited[i] = true;
			}
		}

	}
}

int main()
{
	cin >> N >> M >> V;
	visited.resize(N + 1);
	vec.resize(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < M; i++)
	{
		int num1;
		int num2;
		cin >> num1 >> num2;
		vec[num1][num2] = 1;
		vec[num2][num1] = 1;
	}

	DFS(V);
	fill(visited.begin(), visited.end(), 0);
	cout << endl;
	BFS(V);

}
