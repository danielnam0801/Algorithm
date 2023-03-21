#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int gcd = 0;
	gcd = (n % 2 == 0) ? n / 2 : (n - 1) / 2;
	cout << gcd;
}