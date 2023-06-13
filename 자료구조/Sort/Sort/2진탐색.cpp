#include<iostream>
using namespace std;

int age = 62;
int main() {
	int min, max, mid;
	string s;

	cout << "나이의 최소값, 최대값 입력 : ";
	cin >> min >> max;
	cout << "나이가 맞다면 YES, 더 많으면 UP, 더 적다면 DOWN을 입력하세요." << endl;
	
	while (s != "YES") {
		mid = (min + max) / 2;
		cout << mid << "살 입니까? : ";
		cin >> s;
		if (s == "UP") min = mid + 1;
		if (s == "DOWN") max = mid - 1;
	}
	cout << "WOW";
}