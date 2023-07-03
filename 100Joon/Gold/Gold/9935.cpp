#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s1, s2;

	cin >> s1;
	cin >> s2;

	vector<int> indexList;

	for (int i = 0; i < s2.size(); i++) {
		int pos = 0;
		while (true){
			
			int index = s1.find(s2[i], pos);
			
			if (index == string::npos) {
				break;
			}
			else {
				indexList.push_back(index);
				pos = index + 1;
			}
		}
	}
	
	if (indexList.size() == s1.size()) {
		cout << "FRULA";
		return 0;
	}
	else {
		
		sort(indexList.begin(), indexList.end());
		
		int n = 0;
		for (int i = 0; i < s1.size(); i++) {
			if (n < indexList.size()){
				if (i == indexList[n]) {
					n++;
					continue;
				}
			}
			cout << s1[i];
		}
	}


}