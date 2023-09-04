#include <iostream>
#include <string>
using namespace std;

int main() {

	int pNum, firstNote, eatNum = 0;

	cin >> pNum >> firstNote;

	int* highNote = new int[pNum + 1];

	for (int i = 0; i < pNum; i++) {
		int maximumNote;
		cin >> maximumNote;
		highNote[i] = maximumNote;
	}

	int turn = 0;
	for (int i = firstNote; i < 10000; i++) {
		if (highNote[turn % pNum] < i) {
			eatNum = turn % pNum + 1;
			break;
		}
		turn++;
	}
	cout << eatNum;

}
