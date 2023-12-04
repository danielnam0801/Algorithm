#include<iostream>
using namespace std;

int fibo(int n)
{
	if (n < 1) return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int N;
int main()
{
	cin >> N;
	int num = fibo(N);
	cout << num;
}