#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<int> numList1;
vector<int> numList2;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		numList1.push_back(num);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		numList2.push_back(num);
	}


}