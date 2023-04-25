#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	map<string, double> roots;

	string s;
	double max = 0;

	while (getline(cin, s)) {
		roots[s]++;
		max++;
	}

	cout << fixed;
	cout.precision(4);
	
	for (auto a : roots) {
		cout << a.first << " " << (float)(a.second / max * 100) << endl;
	}
}