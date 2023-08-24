#include<iostream>
#include <vector>
using namespace std;

int arr[10001];

vector<int> v;
int k, n;
long long int vn, low, high, mid, cnt;
long long int iMax;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> vn;
		v.push_back(vn);
		if (iMax < vn)
			iMax = vn;
	}

	low = 1;
	high = iMax;
	int result = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		cnt = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] - mid < 0) {
				continue;
			}
			cnt += v[i] - mid;
		}

		if (cnt >= k) {
			low = mid + 1;
			if (result < mid)
				result = mid;
		}
		else {
			high = mid - 1;
		}
	}

	cout << result << endl;
}