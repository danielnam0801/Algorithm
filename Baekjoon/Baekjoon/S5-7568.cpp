#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
//#include <iostream>

using namespace std;

#include <string>
#include <vector>

//int solution(int n) {
//    int answer = 0;
//    string a = std::to_string(n);
//    for (int i = 0; i < a.size(); i++) {
//        answer += (a[i]) - '0';
//    }
//    return answer;
//}

#pragma region String Find

//vector<int> solution(string s) { 
//    vector<int> answer(s.size(), -1);
//    for (int i = s.size()-1; i > 0; i--) {
//        int index = s.rfind(s[i], i - 1);
//        if ( index != string::npos) {
//            answer[i] = i - index;
//        }
//    }
//return answer;
//}

#pragma endregion

#pragma region Unordered_map
//vector<int> soloution(string s) {
//    unordered_map<char, int> answer;
//    for (int i = 0; i < s.size(); i++) {
//        answer.find(s[i])
//        answer[s[i]] = -1;
//    }
//}
#pragma endregion

int main() {
    vector<pair<int, int>> v;
    int grade[50];
    fill(grade, grade + 50, 1);
    int cnt;

    cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        int weight, height;
        cin >> weight >> height;
        v.push_back({ weight,height });
    }

    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt; j++) {
            if (i == j) continue;
            if (v[i].first < v[j].first) {
                if (v[i].second < v[j].second) {
                    grade[i]++;
                }
            }
        }
    }

    for (int i = 0; i < cnt; i++) {
        cout << grade[i] << " ";
    }

    //int count , aidx, bidx;
    //cin >> count;
    //string num = "123";
    //char a, b;
    //for (int i = 0; i < count; i++) {
    //    cin >> a >> b;
    //    aidx = num.find(a);
    //    bidx = num.find(b);
    //    num[bidx] = a;
    //    num[aidx] = b;
    //}

    //cout << num[0];
}