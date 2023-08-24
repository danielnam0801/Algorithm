#include<iostream>
using namespace std;

int arr[46] = { 1, 1 };
void Fibonachi() {
	for (int i = 2; i < 45; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}

int main() {
	int i = 0;
	cin >> i;
	Fibonachi();
	cout << arr[i - 1];
}