//https://school.programmers.co.kr/learn/courses/30/lessons/42579

#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<string, vector<pair<int,int>>> playfrequencies; // key : genre name, value : {������ȣ, �뷡�� ��� ��)
map<int, string, greater<int>> album;
// key : genre�� ��ü����� ��, value : genre name 
// ����� ū ������� ����

bool compare(const pair<int, int>& left, const pair<int, int>& right)
{
    return left.second > right.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
 
    for (int i = 0; i < genres.size(); i++)
    {
        playfrequencies[genres[i]].push_back({ i, plays[i] }); //�帣�� �뷡 ��� �� �߰�
    }

    for (auto plays : playfrequencies) //��ȸ
    {
        int sum = 0;
        for (auto playCount : plays.second) //�뷡�� �÷��� ��
        {
            sum += playCount.second;
        }
        sort(plays.second.begin(), plays.second.end(), compare); // �������� ����
        album[sum] = plays.first; //��ü ��� ����
    }

    for (auto playfrequency : album) //����� ū ������� ��ȸ
    {
        for (int i = 0; i < min((int)playfrequencies[playfrequency.second].size(), 2); i++) // �ִ� 2��������
        {
            answer.push_back(playfrequencies[playfrequency.second][i].first); // album�� value���� �̿��� ū �������
        }
    }
    
    return answer;
}