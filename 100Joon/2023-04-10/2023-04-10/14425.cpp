#include<iostream>
#include<map>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	map<string, int> a;
	for (int i = 0; i < n; i++) {
		string s; 
		cin >> s;
		a[s] = 0;
	}
	for (int i = 0; i < m; i++) {
		string s;	
		cin >> s;
		if(a.find(s) != a.end())
			a[s]++;
	}
	

	int cnt = 0;
	for (auto s : a) {
		cnt+= s.second;
	}

	cout << cnt;
}