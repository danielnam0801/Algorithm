#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	stack<char> nums;
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.length(); i++) {
		int num1;
		int num2;
		cout << s[i] << endl;
		nums.push(s[i]);
		if (s[i] != ' ') {
			if (s[i] < 80 || s[i] > 73) {
				nums.pop();
				num1 = nums.top();
				nums.pop();
				num2 = nums.top();
				nums.pop();
				nums.push(num1 + num2);
			}
		}
	}
	cout << nums.top();
}