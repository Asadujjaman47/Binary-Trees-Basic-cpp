// L6. Inorder Traversal of Binary Tree

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

void inorder(struct Node *node){
	if(node == NULL){
		return;
	}

	inorder(node->left);
	cout << node->data << " ";
	inorder(node->right);
}

int main(){
	struct Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->right = new Node(5);

	inorder(root);
}