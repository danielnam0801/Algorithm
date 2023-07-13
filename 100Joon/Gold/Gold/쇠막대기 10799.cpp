#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>
#include <map>
#include <stack>

using namespace std;

int main() {
	string bracket;
	cin >> bracket;

	stack<char> brackets;
	char beforebracket = ' ';
	int sum = 0;

	for (int i = 0; i < bracket.size(); i++) {
		if (bracket[i] == '(')
			brackets.push(bracket[i]);
		else
		{
			if (beforebracket == '(')
				sum += brackets.size() - 1;
			else sum += 1;

			brackets.pop();
		}
		beforebracket = bracket[i];
	}
	cout << sum;
}