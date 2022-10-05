// L5. Preorder Traversal of Binary Tree


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

void preorder(struct Node *node){
	if(node == NULL){
		return;
	}

	cout << node->data << " ";
	preorder(node->left);
	preorder(node->right);
}

int main(){
	struct Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->right = new Node(5);

	preorder(root);
}