#include <iostream>
#include <vector>
using namespace std;
#define MAX_VTXS 200

class AdjMatGraph
{
protected:
	int size;
	//char vertices[MAX_VTXS];
	//int adj[MAX_VTXS][MAX_VTXS];
	vector<char> vertices;
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
	return 0;
}


