#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;

int main() {
	cin >> n >> k;
	
	int low = 1; // �ε��� ����
	int high = k; //�ε��� �ְ�
	int mid;
	int result = 0;
	//B[k] = ??  // ?? ���� �۰ų� ���� ������ ������ �ּ� k�� �̴�; 
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