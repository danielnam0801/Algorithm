#include<iostream>
using namespace std;

int age = 62;
int main() {
	int min, max, mid;
	string s;

	cout << "������ �ּҰ�, �ִ밪 �Է� : ";
	cin >> min >> max;
	cout << "���̰� �´ٸ� YES, �� ������ UP, �� ���ٸ� DOWN�� �Է��ϼ���." << endl;
	
	while (s != "YES") {
		mid = (min + max) / 2;
		cout << mid << "�� �Դϱ�? : ";
		cin >> s;
		if (s == "UP") min = mid + 1;
		if (s == "DOWN") max = mid - 1;
	}
	cout << "WOW";
}