#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int cnt = 0;  
	while (i <= n/2) {
		int j = i;
		int sum = 0;
		while (true) {
			sum += j;
			j++;
			if (sum > n) break;
			else if (sum == n)
			{
				cnt++; 
				break;
			}
		}
		i++;
	}
	cout << cnt;
}