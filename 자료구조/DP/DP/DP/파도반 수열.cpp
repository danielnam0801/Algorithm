#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;

int testCase, greater = 0;
long long  arr[101] = { 1,1,1 };

int main() {

    cin >> testCase;

    for (int i = 3; i < 101; i++) {
        arr[i] = arr[i - 3] + arr[i - 2];
    }

    for (int i = 0; i < testCase; i++) {
        int testnum = 0;
        cin >> testnum;
        cout << arr[testnum - 1] << endl;
    }
}