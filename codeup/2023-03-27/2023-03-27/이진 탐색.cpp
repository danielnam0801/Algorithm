#include <iostream>
using namespace std;
int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
int main() {
	
	int x, low, high, mid;
	cin >> x;
	low = 0;
	high = 9;
	mid = (low+high/2);

	while (low < high) {
		if (x == arr[mid]) {
			cout << x << "��" << mid << "�� index�� �ֽ��ϴ�." << endl;
			break;
		}
		else if (x < arr[mid]) {
			high = mid - 1;
		}
		else if (x > arr[mid]) {
			low = mid + 1;
		}
	}

	/*
	for (int i = 0; i < 10; i++) {
		if (arr[i] == x)
			cout << x << "��" << i <<"��°�� �־�" << endl;
	}*/
}