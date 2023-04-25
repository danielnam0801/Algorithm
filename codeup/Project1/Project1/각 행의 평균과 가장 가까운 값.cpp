#include<iostream>
#include <vector>
#include<cmath>

using namespace std;

int main() {
	int arr[10][10];
	int avg[10] = { 0};
	int sim[10] = { 0};

	for (int i = 0; i < 9; i++) {
		int minDis = 100;
		int sum = 0; 
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			sum += arr[i][j];
		}
		avg[i] = floor((double)sum / 9 + 0.5f);
		for (int j = 0; j < 9; j++) {
			int dis = abs(arr[i][j] - avg[i]);
			if (minDis > dis) {
				sim[i] = arr[i][j];
				minDis = dis;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		cout << avg[i] << " " << sim[i] << endl;
	}
}