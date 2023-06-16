#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	unordered_map<int, string> pokeNum;
	unordered_map<string, int> pokes;

	for (int i = 1; i <= n; i++) {
		cin >> pokeNum[i];
		pokes[pokeNum[i]] = i;
	}

	string pokeName;
	for (int i = 0; i < m; i++) {
		cin >> pokeName;
		
		bool isNum = true;
		for (int i = 0; i < pokeName.size(); i++) {
			if (!isdigit(pokeName[i])) {
				isNum = false;
				break;
			}
		}
		if (isNum) {
			cout << pokeNum[stoi(pokeName)] << endl;
		}
		else {
			cout << pokes[pokeName] << endl;
		}
	}
}
