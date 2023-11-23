#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main()
{

	int testcase;
	int a;
	int b;

	int num;

	cin >> testcase;

	vector<int> result_vec;
	while (testcase--)
	{
		vector<int> alist;
		vector<int> blist;

		cin >> a >> b;
		for (int i = 0; i < a; i++)
		{
			cin >> num;
			alist.push_back(num);
		}

		for (int i = 0; i < b; i++)
		{
			cin >> num;
			blist.push_back(num);
		}

		sort(alist.begin(), alist.end());
		sort(blist.begin(), blist.end());
		int result = 0;
		for (int i = 0; i < a; i++)
		{
			int cnt = lower_bound(blist.begin(), blist.end(), alist[i]) - blist.begin();
			result += cnt;
		}
		result_vec.push_back(result);
	}

	for (int i = 0; i < result_vec.size(); i++)
		cout << result_vec[i] << endl;

}