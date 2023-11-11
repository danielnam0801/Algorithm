#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<sstream>
#include<algorithm>

using namespace std;

vector<int> v = { 0, 1, 2, 3, 4, 5, 7, 8 };
int lower_bound(int key)
{
	int left = 0, right = v.size(), mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (v[mid] >= key) //특정 조건(key값 이상) 만족
			right = mid - 1; //특정 조건을 만족하는 작은 값 찾기
		else
			left = mid + 1; // 더 큰 값 중에서 만족하는 값 찾으러 가기
	}
	return left;
}

int main()
{
	int num;
	cin >> num;
	cout << lower_bound(num) << endl;
}