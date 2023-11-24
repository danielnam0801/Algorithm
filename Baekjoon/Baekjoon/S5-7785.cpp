//https://www.acmicpc.net/problem/7785

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<string, bool, greater<string>> _allpeople;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	string name, value;
	
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> name >> value;
		
		bool _boolean = value.compare("enter") == 0 ? true : false;

		_allpeople[name] = _boolean;
	}
	
	for (const auto& value : _allpeople)
	{
		if (value.second == true)
			cout << value.first << "\n";
	}
}