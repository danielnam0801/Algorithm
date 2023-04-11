#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack<int> s;
string str;
int main() {
	getline(cin, str);
	int sn = 0;
	for (int i = 0; i < str.length(); i++)
	{
		//숫자인 경우 -> 정수로 바꿔줘야함;
		if (str[i] >= '0' && str[i] <= '9') {
			sn = 10 * sn + (str[i] - '0');
		}
		//공백
		else if (str[i] == ' ') {
			if (sn != 0) {
				s.push(sn);
				sn = 0;
			}
		}
		//연산자
		else {
			int x = s.top();
			s.pop();
			int y = s.top();
			s.pop();
			if (str[i] == '+') {
				s.push(x + y);
			}
			else if (str[i] == '-') {
				s.push(y-x);
			}
			else if(str[i] =='*') {
				s.push(y * x);
			}
		}
	}

	cout << s.top();
	/*stack<char> nums;
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.length(); i++) {
		int num1;
		int num2;
		if (s[i] != ' ') {
			nums.push(s[i]);
			if (nums.size() >= 3) {
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
	}
	cout << nums.top() - '0';
	*/
}