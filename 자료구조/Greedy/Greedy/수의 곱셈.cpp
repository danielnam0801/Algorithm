#include<iostream>
#include<vector>
using namespace std;

vector<int> odds;
vector<int> evens;

int main()
{
	int num;
	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		if (num % 2 == 0)
			evens.push_back(num);
		else
			odds.push_back(num);
	}

	int result = 1;
	if (odds.size() != 0)
	{
		for (int i = 0; i < odds.size(); i++)
			result *= odds[i];
	}
	else
	{
		for (int i = 0; i < evens.size(); i++)
			result *= evens[i];
	}

	cout << result;
}