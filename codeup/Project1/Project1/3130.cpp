#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<long long> h;
int wholeCnt = 0;
int main() {
	long long n;
	cin >> n;

	long long hi;
	for (int i = 0; i < n; i++) {
		cin >> hi;

		while (!h.empty() && hi >= h.top()) {
			h.pop();
		}

		h.push(hi);
		wholeCnt += h.size() - 1;
	}

	cout << wholeCnt;
	
}