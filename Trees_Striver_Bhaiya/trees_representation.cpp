//iterative preorder traversal of trees (Root left right)

class Solution
{
public:
	vector<int> preoderTraversal(TreesNode* root)
	{
		vector<int> preorder;
		if (root == NULL)
			return preorder;
		stack <TreesNode*> st;
		st.push(root);

		while (!st.empty())
		{
			root = st.top();
			st.pop();
			preorder.push_back(root->val);
			if (root->right != NULL)
			{
				st.push(root->right);
			}
			if (root->left != NULL)
			{
				st.push(root->left);
			}
		}
		return preorder;
	}
};

//iterative inorder traversal

class Solution
{
public:
	vector<int> inrodertraversal(TreeNode* root)
	{
		stack<TreeNode*> st;
		TreeNode* node = root;
		vector<int> preorder;
		while (true)
		{
			if (node != NULL)
			{
				st.push(node);
				node = node->left;
			}
			else
			{
				if (st.empty() == true)
					break;
				node = st.top();
				st.pop();
				inorder.push_back(node->val);
				node = node->right;
			}
		}
		return inorder;
	}
};