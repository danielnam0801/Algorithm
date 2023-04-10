#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//STL(Standard Template Library)
//벡터, 스택, 페어
int main() {
	stack<int> s;
	stack<pair<char, int>> s2;
	s2.push(make_pair('a', 1));
	s2.push({ 'a',1 });
	//push, top, pop, size, empty
	pair<int, float> p;
	cin >> p.first >> p.second;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.pop();
	cout << s.top() << endl;
}