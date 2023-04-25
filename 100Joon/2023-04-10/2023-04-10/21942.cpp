#include<iostream>
#include<map>
#include<string>

using namespace std;

map<string, string> nameInfo; //이름, 부품; 
map<string, string> dayInfo; //이름, 날짜;

int num;
string L;
int f;

int main() {
	cin >> num >> L >> f;

	string date, time,  mat, name; 
	for (int i = 0; i < num; i++) {
		cin >> date >> time >> mat >> name;
		nameInfo[name] += mat;
		dayInfo[name] += date + " " + time;
	}

	for (auto a : nameInfo) {
		dayInfo[a.first] = ;
	}
}