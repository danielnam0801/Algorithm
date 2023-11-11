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
		if (v[mid] >= key) //Ư�� ����(key�� �̻�) ����
			right = mid - 1; //Ư�� ������ �����ϴ� ���� �� ã��
		else
			left = mid + 1; // �� ū �� �߿��� �����ϴ� �� ã���� ����
	}
	return left;
}

int main()
{
	int num;
	cin >> num;
	cout << lower_bound(num) << endl;
}