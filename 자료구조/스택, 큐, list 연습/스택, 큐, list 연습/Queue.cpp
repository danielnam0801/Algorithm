#include<iostream>
#include<queue>
using namespace std;

// 선입선출 알고리즘 (FIFO) 
// 가장 먼저 삽입되는 객체가 가장 먼저 삭제되는 구조, 편의점에서 물건 채울 때의 원리
// front 는 큐에서 삭제가 일어나는 곳
// rear은 큐에서 삽입이 일어나는 곳ㄴ
// 속성: push, pop, back, front, size, empty
class Queue {
public:
	int* buf;
	int rear, front = -1;
};
int main() {

	queue<int> a;
	a.back
}