#include<map>
#include<iostream>
#include<vector>

using namespace std;

map<string, int> cloths;
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		for (int j = 0; j < num; j++) {
			string cloth;
			string type;
			cin >> cloth >> type;
			cloths[type] ++;
		}
		int cnt = 1;
		for (auto a : cloths) {
			cnt *= a.second + 1;
		}
		cnt--;
		cout << cnt << endl;
		cloths.clear();
	}
}