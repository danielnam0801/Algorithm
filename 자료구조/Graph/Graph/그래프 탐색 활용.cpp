#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int dx[4] {-1, 1, 0, 0};
    int dy[4] {0, 0, -1, 1};

    int col = maps.size();
    int row = maps[0].size();
    queue<pair<int, int>> que;
    que.push({ 0, 0 });
    while (!que.empty())
    {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= row || ny >= col) continue;
            if (maps[nx][ny] == 1) {
                que.push({ nx , ny });
                maps[nx][ny] = maps[x][y] + 1;
            }
        }
    }
  
    if (maps[col - 1][row - 1] == 0 || maps[col-1][row-1] == 1) return -1;
    return maps[col - 1][row - 1];
    
}