#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool comp(string a, string b) {
    if (a.length() < b.length()) {
        return true;
    }
    else if(a.length() == b.length()) {
        if (a < b) return true;
    }
    return false;
}

vector<int> solution(vector<string> words, vector<string> queries) {
    vector<string> revwords = words;
    vector<int> answer;
    for (int i = 0; i < revwords.size(); i++) {
        reverse(revwords[i].begin(), revwords[i].end());
    }
    sort(words.begin(), words.end(), comp);
    sort(revwords.begin(), revwords.end(), comp);

    for (int i = 0; i < queries.size(); i++) {
        int low, high, idx;
        string strquery = queries[i];

        //2가지로 나누어짐
        //1.?로 시작하는 경우
        if (strquery[0] == '?') {
            reverse(strquery.begin(), strquery.end());
            idx = strquery.find('?');
            for (int j = idx; j < strquery.length(); j++) {
                strquery[j] = 'a';
            }
            low = lower_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();
            //lower_bound는 찾으려는 값 이상의 값이 처음 나타는 위치.
            for (int j = idx; j < strquery.length(); j++) {
                strquery[j] = 'z';
            }
            high = upper_bound(revwords.begin(), revwords.end(), strquery, comp) - revwords.begin();
        }
        // 그게 아닌경우
        else {
            idx = strquery.find('?');
            for (int j = idx; j < strquery.length(); j++) {
                strquery[j] = 'a';
            }
            low = lower_bound(words.begin(), words.end(), strquery, comp) - words.begin();
            for (int j = idx; j < strquery.length(); j++) {
                strquery[j] = 'z';
            }
            high = upper_bound(words.begin(), words.end(), strquery, comp) - words.begin();
        }
        answer.push_back(high - low);
    }
    return answer;
}
//vector<int> solution(vector<string> words, vector<string> queries) {
//    vector<int> answer;
//    sort(words.begin(), words.end());
//    for (int i = 0; i < queries.size(); i++) {
//        vector<string> words2 = words;
//        int findex = queries[i].find('?');
//        int lindex = queries[i].find_last_of('?');
//
//        for (auto a : words2) {
//            for (int i = findex; i <= lindex; i++) {
//                a[i] = '?';
//            }
//            cout << words2[i] << endl;
//        }
//        int cnt = upper_bound(words2.begin(), words2.end(), queries[i]) - lower_bound(words2.begin(), words2.end(), queries[i]);
//        //int cnt = upper_bound(words.begin(), words.end(), queries[i]) - lower_bound(words.begin(), words.end(), queries[i]);
//        answer.push_back(cnt);
//        cout << "cnt : " << cnt;
//    }
//    return answer;
//}

int main() {
    vector<string> words{ "frodo", "front", "frost", "frozen", "frame", "kakao" };
    vector<string> queries{ "fro??", "????o", "fr???", "fro???", "pro?" };

    vector<int> a = solution(words, queries);

    for(auto s : a)
    {
        cout << s;
    }
}