#include<iostream>
using namespace std;
#define SIZE 3

//Stack�̶� ���Լ��� �˰������� ���� ���߿� ���� ���� ���� ���� ������ �����̴�.
/// ���� �������� �����͸� �����ϰ� ���� �� �� �ִ� ����
// �Ӽ� : Push, Pop, Top, Empty, Size

class Stack {
public:
	int topIdx = -1;
	char arr[SIZE];
	char name;
public:
	Stack(char ch = ' ') : name(ch){};
	void Push(char ch) {
		if (topIdx >= SIZE) {
			cout << "�����÷ο�" << endl;
			return;
		}
		topIdx++;
		arr[topIdx] = ch;

	}
	char Pop() {
		if (topIdx == -1) {
			cout << "���� ����" << endl;
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