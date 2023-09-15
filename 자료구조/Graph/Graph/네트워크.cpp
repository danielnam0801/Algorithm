#include <string>
#include <vector>

using namespace std;

vector<vector<int>> cmts;
vector<bool> isvisited;
int s = 3;

void DFS(int j)
{
    isvisited[j] = true;

    for (int i = 0; i < s; i++)
    {
        if (isvisited[i] == false && cmts[i][j] == 1)
        {
            DFS(j + 1);
            isvisited[i] = true;
        }
    }
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    cmts = computers;
    isvisited.resize(n);
    s = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isvisited[j] == false)
            {
                DFS(j);
                answer++;
            }
        }
    }
    return answer;
}