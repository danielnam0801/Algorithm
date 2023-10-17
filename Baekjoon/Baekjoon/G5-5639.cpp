#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

void PostOrder(node* node)
{
	if (node == nullptr) return;
	PostOrder(node->left);
	PostOrder(node->right);
	cout << node->data << endl;
}

void makeNode(node* root, int value)
{
	if (value > root->data)
	{
		if (root->right == nullptr)
		{
			root->right = new node();
			root->right->data = value;
		}
		else
		{
			makeNode(root->right, value);
		}
	}
	else if(value < root->data)
	{
		if (root->left == nullptr)
		{
			root->left = new node();
			root->left->data = value;
		}
		else
		{
			makeNode(root->left, value);
		}
	}
	else
	{
		return;
	}
}

int main()
{
	node* root = nullptr;
	int value;
	while (cin >> value)
	{
		if (value == -1) break;
		if (root == nullptr)
		{
			root = new node();
			root->data = value;
		}
		makeNode(root, value);

	}

	PostOrder(root);
}