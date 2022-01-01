#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct  TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
vector<int>result;
int main()
{
	TreeNode* root = new TreeNode(3);
	stack<TreeNode*>s;
	s.push(root);
	while (!s.empty())
	{
		TreeNode* node = s.top();
		s.pop();
		result.push_back(node->val);
		if (node->right)
			s.push(node->right);
		if (node->left)
			s.push(node->left);
	}
	for (int i : result)
		cout << i;
	return 0;
}