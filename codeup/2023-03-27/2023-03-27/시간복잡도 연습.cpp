#include <iostream>
using namespace std;

int sum(int n) {
	return int(n*(n+1)/2);
}

int main() {
	//int n;
	//cin >> n;
	//cout << sum(n) << endl;

	string str;
	clock_t start, end;
	int n;
	cin >> n;
	start = clock();
	for (int i = 0; i < n; i++) {
		//str += "X";
		str = str + "X";
	}
	end = clock();
	cout << end - start << endl;
	return 0;
}
