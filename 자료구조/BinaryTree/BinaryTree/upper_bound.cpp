#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<sstream>
#include<algorithm>

using namespace std;

vector<int> v = { 0, 1, 2, 3, 4, 5, 7, 8 };
int upper_bound(int key)
{
	int left = 0, right = v.size(), mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (v[mid] > key)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return left;
}


int main()
{
	int num;
	cin >> num;	
	cout << upper_bound(num) << endl;
}