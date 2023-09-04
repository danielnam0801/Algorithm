#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
#define MAX_VTXS 200


class AdjMatGraph
{
public:
	int size;
	//char vertices[MAX_VTXS];
	//int adj[MAX_VTXS][MAX_VTXS];
	vector<char> vertices;
	int visited[50];
	vector<vector<int>> adj;
public:
	AdjMatGraph() { reset(); }
	AdjMatGraph(int n) { reset(n); }
	char getVertex(int i) { return vertices[i]; }
	void insertVertex(char ch) { if(!isFull()) vertices[size++] = ch; }
	int getEdge(int i, int j) { return adj[i][j]; }
	void setEdge(int i, int j, int val) { adj[i][j] = val; }
	void insertEdge(int u, int v) { adj[u][v] = 1; adj[v][u] = 1; }
	bool isEmpty() { return size == 0; }
	bool isFull() { return size >= MAX_VTXS; }
	void resetVisited() {
		for (int i = 0; i < size; i++) {
			visited[i] = false;
		}
	}
	bool isLinked(int u, int v) {
		return getEdge(u, v) != 0;
	}
	void DFS(int index) {
		visited[index] = true;
		cout << index;
		
		for (int x = 0; x < size; x++) {
			if (isLinked(index, x) && !visited[x]) {
				DFS(getVertex(index+1));
			}
		}
	}
	void BFS(int v) {
		fill_n(visited, MAX_VTXS, -1);
		queue<int> q;
		q.push(v);
		while (!q.empty()) {
			int i = q.front();
			q.pop();
			cout << i;
			for (int v = 0; v < size; v++) {
				if (isLinked(i, v) && visited[v] < 0) {
					q.push(v);
					visited[v] = visited[i] + 1;
				}
			}
		}
	}
	void reset()
	{
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
			for (int j = 0; j < MAX_VTXS; j++)
				setEdge(i, j, 0);
	}
	void reset(int n)
	{
		size = 0;
		vertices.resize(n);
		adj.resize(n,vector<int>(n));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				setEdge(i, j, 0);
	}
	void display() {
		int icnt = 0, jcnt = 0;
		for (int i = 0; i <= size; i++) {
			for (int j = 0; j <= size; j++) {
				if (i == 0 && j == 0) {
					cout << " ";
				}
				else {
					if (i == 0) {
						cout << vertices[icnt++];
					}
					else if (j == 0) {
						cout << vertices[jcnt++];
					}
					else {
						cout << adj[i-1][j-1];
					}
				}
				cout << " ";
			}
			cout << endl;
		}
	}
};

int main() {

	int n, m, temp1, temp2;
	cout << "정점의 개수와 간선의 수 :";
	cin >> n >> m;
	cout << "간선의 시작정점과 끝 정점 :" << endl;
	AdjMatGraph g( n );
	for (int i = 0; i < n; i++)
		g.insertVertex('A' + i);
	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		g.insertEdge(temp1, temp2);
	}
	cout << "인접 행렬로 표현한 그래프" << endl;
	g.display();
	cout << "BFS 탐색=> ";
	//g.resetVisited();
	//g.DFS(0);
	g.BFS(0);
	for (int i = 0; i < g.size; i++) {
		cout << g.visited[i] << " ";
	}
	return 0;
}


