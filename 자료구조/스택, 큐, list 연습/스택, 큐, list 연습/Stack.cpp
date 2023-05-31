#include<iostream>
using namespace std;
#define SIZE 3

//Stack이란 후입선출 알고리즘으로 가장 나중에 들어온 값을 가장 먼저 빼내는 구조이다.
/// 한쪽 끝에서만 데이터를 삽입하고 삭제 할 수 있는 구조
// 속성 : Push, Pop, Top, Empty, Size

class Stack {
public:
	int topIdx = -1;
	char arr[SIZE];
	char name;
public:
	Stack(char ch = ' ') : name(ch){};
	void Push(char ch) {
		if (topIdx >= SIZE) {
			cout << "오버플로우" << endl;
			return;
		}
		topIdx++;
		arr[topIdx] = ch;

	}
	char Pop() {
		if (topIdx == -1) {
			cout << "뺄거 없으" << endl;
			return 'a';
		}
		return arr[topIdx--];
	}
};

int main() {
	Stack s;
	s.Push('a');
	s.Push('a');
	cout << s.Pop();
	cout << s.Pop();
	cout << s.Pop();
}