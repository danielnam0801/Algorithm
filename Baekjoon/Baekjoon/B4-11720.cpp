#include <iostream>
#include <string>
using namespace std;

int main() {
    int input1;


    int sum = 0;

    cin >> input1;
    string input2;
    cin >> input2;

    for (int i = 0; i < input1; i++) {
        sum += input2.at(i) - 48;
    }

    cout << sum;
}