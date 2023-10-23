//https://school.programmers.co.kr/learn/courses/30/lessons/42578

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<string, int> categories; // ī�װ��� �� ����
int solution(vector<vector<string>> clothes) {
    int answer = 1;

    for (auto categorie : clothes)
    {
        categories[categorie[1]]++;
    }

    for (auto categorie : categories)
    {
        answer *= categorie.second + 1;
    }

    return answer - 1;
}