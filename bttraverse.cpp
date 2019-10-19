

#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int p)
	{
		data = p;
		left = NULL;
		right = NULL;

	}
};


struct Node* root;
void inorder(Node* root) {
	if (root != NULL) {
		inorder(root->left);
		cout << root->data<<" ";
		inorder(root->right);
	}

}

void preorder(Node* root) {
	if (root != NULL) {
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}

}

void postorder(Node* root) {
	if (root != NULL) {
		postorder(root->left);
		postorder(root->right);
		cout << root->data << " ";
	}

}

int main()
{
	//int rand();
	root = new Node(rand()%10);
	root->left = new Node(rand()%10);
	root->right = new Node(rand()%10);
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	postorder(root);


}

