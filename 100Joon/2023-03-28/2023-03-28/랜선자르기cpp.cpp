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
	cin >> k >> n;

	for (int i = 0; i < k; i++) {
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
		for (int i = 0; i < k; i++) {
			cnt += v[i] / mid;
		}

		if (cnt >= n) {
			low = mid + 1;
			if (result < mid)
				result = mid;
		}
		else {
			high = mid - 1;
		}
	}
	cout << result << endl;

	/*vector<int> arr;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int length;
		cin >> length;
		arr.push_back(length);
		sum += length;
	}

	int plus;
	for (int i = sum/ k; i > 0; i--) {
		plus = 0;
		int cnt = 0;
		for (int j = 0; j < arr.size(); j++)
		{
			if (arr[j] < i) 
				break;
			plus += arr[j] / i;
			cnt++;
		}
		if (cnt != arr.size()) continue;
		if (plus >= k) {
			cout << i;
			break;
		}
	}*/
	
}