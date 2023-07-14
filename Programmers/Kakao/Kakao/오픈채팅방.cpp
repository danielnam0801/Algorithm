#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<string> split(string str, char delimiter);
vector<string> solution(vector<string> record) {
    vector<string> answer;

    unordered_map<string, string> ids; // first id, second nickname
    vector<int> actorders;
    vector<string> id;

    for (int i = 0; i < record.size(); i++) {
        vector<string> info = split(record[i], ' ');
        
        id.push_back(info[1]);
        ids[info[1]] = info[2]; // info[1] == id, info[2] == nickname

        if (info[0] == "Enter") {
            actorders.push_back(1);
        }
        if (info[0] == "Leave") {
            actorders.push_back(0);
        }  
    }

    for (int i = 0; i < actorders.size(); i++) {
        string s = ids[id[i]] + "님이";
        if (actorders[i] == 0) {
            s += " 나갔습니다.";
        }
        else {
            s += " 들어왔습니다.";
        }
        answer.push_back(s);
    }

    return answer;
}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}

int main() {
    vector<string> record{ "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };

    vector<string> s = solution(record);

    for (auto a : s) {
        cout << a << " ";
    }
}
