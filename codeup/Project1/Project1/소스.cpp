#include<iostream>
#include<queue>
#include<deque>

using namespace std;
deque<int> dq;

queue<int> q;
int main() {
	dq.push_back(1);
	dq.push_front(2);
	dq.pop_front();
	dq.pop_back();
	q.push(1);
	q.pop();
	q.front();

}