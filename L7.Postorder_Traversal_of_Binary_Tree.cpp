// L7. Postorder Traversal of Binary Tree

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;

	Node(int val){
		data = val;
		left = right = NULL;
	}
};

void postorder(struct Node *node){
	if(node == NULL){
		return;
	}

	postorder(node->left);
	postorder(node->right);
	cout << node->data << " ";
}


int main(){
	struct Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->right = new Node(5);

	postorder(root);
}
