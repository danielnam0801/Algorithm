#include<vector>
#include<iostream>
using namespace std;

int answer;
int targetNum;
int visited[51]{ 0 };
vector<int> v;

int solution(vector<int> numbers, int target) {
    targetNum = target;
    v = numbers;
    DFS(0, '+');
    DFS(0, '-');
    return answer;
}

void DFS(int n, char sign) {
    if (sign == '+') visited[n] += v[n];
    else
        visited[n] -= v[n];
        if (n + 1 == v.size()) {
            if (visited[n] == targetNum) {
                answer++;
            }
            return;
        }
    DFS(n + 1, '+');
    DFS(n + 1, '-');
}