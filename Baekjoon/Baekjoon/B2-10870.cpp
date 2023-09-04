#include <iostream>
using namespace std;

int arr[100];
int f(int x) {
	if (x == 0) return 0;
	if (x <= 2) return 1;
	return f(x - 1) + f(x - 2);

}

int main() {
	int n;
	cin >> n;

	cout << f(n);
}