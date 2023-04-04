#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;

int main() {
	cin >> n >> k;
	
	int low = 1; // 인덱스 최저
	int high = k; //인덱스 최고
	int mid;
	int result = 0;
	//B[k] = ??  // ?? 보다 작거나 같은 원소의 개수는 최소 k개 이다; 
	int cnt = 0;
	while (low <= high) {
		cnt = 0;
		mid = (low + high)/2;
		for (int i = 1; i <= n; i++) {
			cnt += min(mid / i, n);
		}

		if (cnt < k) {
			low = mid + 1;
		}
		else {
			result = mid;
			high = mid - 1;
		}
	}

	cout << result;

}