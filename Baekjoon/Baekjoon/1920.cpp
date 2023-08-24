#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, vn;
int m, vm;
vector<int> v;
vector<int> v2;
int bisearch(int x) {
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (v[mid] == x) return 1;
		else if (v[mid] > x) high = mid - 1;
		else if (v[mid] < x) low = mid - 1;
	}
	return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> vn;
		v.push_back(vn);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> vm;
		cout << bisearch(vm) << "\n";
	}

	//sort(arr1, arr1 + n);
	//for (int i = 0; i < m; i++) {
	//	re:
	//	int low = arr1[0];
	//	int high = arr1[n-1];
	//	int mid = arr1[low + high / 2];

	//	for (int j = 0; j < n; j++) {
	//		if (arr2[i] == arr1[mid]) {
	//			cout << 1 << "\n";
	//			++i;
	//			goto re;
	//			break;
	//		}
	//		else if (arr2[i] < arr1[mid]) {
	//			high = mid - 1;
	//		}
	//		else if (arr2[i] > arr1[mid]) {
	//			low = mid + 1;
	//		}
	//	}
	//	cout << 0 << "\n";
	//}

	//delete[] arr1;
	//delete[] arr2;

}

