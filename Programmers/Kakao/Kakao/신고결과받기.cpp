//https://school.programmers.co.kr/learn/courses/30/lessons/92334?language=cpp "신고결과 받기"

#include<vector>
#include<sstream>
#include<set>
#include<unordered_map>

using namespace std;

unordered_map<string, int> reported_list; // 신고 받은 사람 // 신고수
unordered_map<string, set<string>> reporter_list; // key : 신고한 사람 // value : 신고 대상

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{
    vector<int> answer;

    for (size_t i = 0; i < report.size(); ++i)
    {
        //문자열 파싱
        stringstream split(report[i]);
        string reporter, reported;
        split >> reporter >> reported;

        // 신고 중복 체크
        if (reporter_list[reporter].find(reported) != reporter_list[reporter].end())
            continue;

        // MAP에 할당
        reporter_list[reporter].insert(reported);
        reported_list[reported]++; // 신고수 증가
    }

    for(size_t i = 0; i < id_list.size(); i++)
    {
        int result = 0;
        for (const auto& target : reporter_list[id_list[i]])
        {
            if (reported_list[target] >= k) result++;
        }
        answer.push_back(result);
    }
    return answer;
}