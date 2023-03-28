#include <iostream>
#include <vector>
using namespace std;

long long int n, k;

int arr[100000001];

int main() {
	cin >> n >> k;
	cout << ((k / n) + 1) * ((k % n) + 1);
}