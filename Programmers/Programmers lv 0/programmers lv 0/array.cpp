#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    int cnt = 0;
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i].compare(s2[j]) == 0) cnt++;
            
        }
    }
    return cnt;
}

int main() {
    vector<string> s1 = {"a", "b", "c"};
    vector<string> s2 = {"com","b", "d" , "p", "c"};

    cout << solution(s1, s2);
        

}