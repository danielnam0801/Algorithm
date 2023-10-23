//https://school.programmers.co.kr/learn/courses/30/lessons/42579

#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<string, vector<pair<int,int>>> playfrequencies; // key : genre name, value : {고유번호, 노래별 재생 수)
map<int, string, greater<int>> album;
// key : genre에 전체재생빈도 합, value : genre name 
// 재생빈도 큰 순서대로 정렬

bool compare(const pair<int, int>& left, const pair<int, int>& right)
{
    return left.second > right.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
 
    for (int i = 0; i < genres.size(); i++)
    {
        playfrequencies[genres[i]].push_back({ i, plays[i] }); //장르별 노래 재생 수 추가
    }

    for (auto plays : playfrequencies) //순회
    {
        int sum = 0;
        for (auto playCount : plays.second) //노래별 플레이 수
        {
            sum += playCount.second;
        }
        sort(plays.second.begin(), plays.second.end(), compare); // 내림차순 정렬
        album[sum] = plays.first; //전체 재생 빈도합
    }

    for (auto playfrequency : album) //재생빈도 큰 순서대로 순회
    {
        for (int i = 0; i < min((int)playfrequencies[playfrequency.second].size(), 2); i++) // 최대 2개까지만
        {
            answer.push_back(playfrequencies[playfrequency.second][i].first); // album에 value값을 이용해 큰 순서대로
        }
    }
    
    return answer;
}