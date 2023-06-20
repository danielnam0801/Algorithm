#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> input;

    for (int i = 0; i < my_string.size(); i++) {
        char a = my_string[i];
        if (input.find(a) == input.end()) {
            answer += a;
            input.insert(a);
        }
    }

    return answer;
}