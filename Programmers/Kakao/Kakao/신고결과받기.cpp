//https://school.programmers.co.kr/learn/courses/30/lessons/92334?language=cpp "�Ű��� �ޱ�"

#include<vector>
#include<sstream>
#include<set>
#include<unordered_map>

using namespace std;

unordered_map<string, int> reported_list; // �Ű� ���� ��� // �Ű��
unordered_map<string, set<string>> reporter_list; // key : �Ű��� ��� // value : �Ű� ���

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{
    vector<int> answer;

    for (size_t i = 0; i < report.size(); ++i)
    {
        //���ڿ� �Ľ�
        stringstream split(report[i]);
        string reporter, reported;
        split >> reporter >> reported;

        // �Ű� �ߺ� üũ
        if (reporter_list[reporter].find(reported) != reporter_list[reporter].end())
            continue;

        // MAP�� �Ҵ�
        reporter_list[reporter].insert(reported);
        reported_list[reported]++; // �Ű�� ����
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