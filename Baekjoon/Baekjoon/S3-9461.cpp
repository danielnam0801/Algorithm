#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;

int main() {
    int testCase;

    long long  arr[101] = { 1,1,1 };
    int greater = 0;

    cin >> testCase;

    for (int i = 3; i < 101; i++) { // 파도반 수열을 arr에 저장하는 
        arr[i] = arr[i - 3] + arr[i - 2];
    }

    for (int i = 0; i < testCase; i++) {
        int testnum = 0;
        cin >> testnum;
        cout << arr[testnum - 1] << endl;
    }


}