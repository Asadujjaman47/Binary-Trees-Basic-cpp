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

vector<vector<int>> levelOrder(struct Node *root){
	vector<vector<int>> ans;

	if(root == NULL)
		return ans;

	queue<struct Node *> q;
	q.push(root);

	while(!q.empty()){
		int sz = q.size();

		vector<int> level;

		for(int i=0; i<sz; ++i){
			struct Node *node = q.front();
			q.pop();

			if(node->left != NULL)
				q.push(node->left);
			if(node->right != NULL)
				q.push(node->right);

			level.push_back(node->data);
		}
		ans.push_back(level);
	}
	return ans;
}


int main(){
	struct Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->right = new Node(5);

	vector<vector<int>> v = levelOrder(root);
	for(auto &it: v){
		for(auto &i: it){
			cout << i << " ";
		}
		cout << "\n";
	}
}
