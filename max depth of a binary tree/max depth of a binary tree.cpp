#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
class Node {
public:
	int data;
	Node* left, * right;
};
Node* newwnode(int data) {
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
void printtree(Node* node) {
	if (node == NULL) {
		return;
	}
	cout << node->data << " ";
	printtree(node->left);
	printtree(node->right);
}
int maxdepth(Node* node) {
	if (node == NULL) {
		return 0;
	}
	int lh = maxdepth(node->left);
	int rh = maxdepth(node->right);
	if (lh > rh) {
		return lh + 1;
	}
	else {
		return rh + 1;
	}
}
int main() {
	Node* root = newwnode(1);
	root->left = newwnode(2);
	root->right = newwnode(10);
	root->left->left = newwnode(50);
	root->left->right = newwnode(100);
	root->left->left->left = newwnode(500);
	printtree(root);
	cout << endl;
	cout << maxdepth(root);

	return 0;

}