#include <iostream>
using namespace std;

int n, k;
int countRoute = 0;
int beforeX;
void s(int x, int y, int range) {
	if (x > n || y >= k)
		return;
	if (x == n) {
		countRoute++;
		return;
	}
	if (range == 1) {
		s(x + 2, y + 1 , 2);
		s(x + 3, y + 1 , 3);
		return;
	}
	if(range == 2){
		s(x + 1, y + 1 , 1);
		s(x + 3, y + 1 , 3);
		return;
	}
	if(range == 3){
		s(x + 1, y + 1 , 1);
		s(x + 2, y + 1, 2);
		return;
	}
	s(x + 2, y + 1, 2);
	s(x + 3, y + 1, 3);
	s(x + 1, y + 1, 1);

}

int main() {
	cin >> n >> k;
	s(0, 0 , 0);
	cout << countRoute;
}