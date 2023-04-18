#include<iostream>
#include<queue>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, w, l, itime = 0, totalW = 0;

	cin >> n >> w >> l;
	
	queue<int> trucks;
	vector<int> v;
	int truck;
	for (int i = 0; i < n; i++) {
		cin >> truck;
		v.push_back(truck);
		//trucks.push(truck);
	}

	for (int i = 0; i < n; i++) {
		while (true) {
			if (w == trucks.size()) {
				totalW -= trucks.front();
				trucks.pop();
			}
			if (totalW + v[i] <= l)
				break;
			trucks.push(0);
			itime++;
		}

		trucks.push(v[i]);
		totalW += v[i];
		itime++;
	}

	/*int cnt = 0;
	while (!trucks.empty()) {
		int currentWeight = 0;
		while (true) {
			if (trucks.empty() || currentWeight > l) {
				break;
			}
			cnt += 1;
			currentWeight += trucks.front();
			trucks.pop();
		}	
		cnt += w;
	}*/

	cout << itime + w;
}