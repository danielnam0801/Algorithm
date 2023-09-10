#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

bool isLinked(string now, string next) {
    int cnt = 0;
    for (int i = 0; i < now.size(); i++) {
        if (now[i] != next[i]) {
            cnt++;
        }
    }

    if (cnt == 1) return true;
    else return false;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    map<string, int>visited;
    queue<string> q;
    q.push(begin);
    visited[begin];
    while (!q.empty()) {
        string now = q.front();
        q.pop();

        for (int i = 0; i < words.size(); i++) {
            string next = words[i];
            if (visited.find(next) == visited.end() && isLinked(now, next))
            {
                q.push(next);
                visited[next] = visited[now] + 1;
                if (next == target) {
                    return visited[next];
                }
            }
        }
    }
    return 0;
}