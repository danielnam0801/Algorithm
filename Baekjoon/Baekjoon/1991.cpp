#include <map>
#include <iostream>
using namespace std;

void preorder(char ch);
void inorder(char ch);
void postorder(char postorder);
map<char, pair<char, char>> node;

int main()
{
	int n;
	char lname, name, rname;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> lname >> rname;
		node[name] = { lname, rname };
	}
	preorder('A'); cout << "\n";
	inorder('A'); cout << "\n";
	postorder('A'); cout << "\n";
}

void preorder(char ch)
{
	if (ch == '.') return;
	cout << ch;
	preorder(node[ch].first);
	preorder(node[ch].second);
	return;
}

void inorder(char ch)
{
	if (ch == '.') return;
	inorder(node[ch].first);
	cout << ch;
	inorder(node[ch].second);
	return;
}

void postorder(char ch)
{
	if (ch == '.') return;
	postorder(node[ch].first);
	postorder(node[ch].second);
	cout << ch;
	return;
}