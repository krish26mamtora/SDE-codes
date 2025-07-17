#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void anyOrder(TreeNode *root, string type)
{
    if (root == NULL)
        return;
    if (type == "pre")
    {
        cout << root->val << "\t";
    }
    anyOrder(root->left, type);
    if (type == "in")
    {
        cout << root->val << "\t";
    }
    anyOrder(root->right, type);
    if (type == "post")
    {
        cout << root->val << "\t";
    }
}

void BFS(TreeNode *root)
{
    if (!root)
    {
        return;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            // to print side view check i ==0 or i==n

            TreeNode *temp = q.front();
            cout << temp->val << " ";
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << "\n";
    }
}

void side_view(TreeNode *root)
{
}

void DFS(TreeNode *root)
{
    if (!root)
    {
        return;
    }
    stack<TreeNode *> s;
    s.push(root);
    while (!s.empty())
    {
        TreeNode *temp = s.top();
        cout << temp->val << " ";
        s.pop();
        if (temp->left)
            s.push(temp->left);
        if (temp->right)
            s.push(temp->right);
    }
}

int Tree_height_max(TreeNode *root)
{
    if (!root)
    {
        return 0;
    }
    if (!root->left && !root->right)
    {
        return 0;
    }
    int ltree_height = Tree_height_max(root->left);
    int rtree_height = Tree_height_max(root->right);
    return 1 + max(ltree_height, rtree_height);
}

void BFS_zigzag(TreeNode *root)
{
    if (!root)
    {
        return;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
    }
}

int main()
{
    // Creating the tree:
    //         1
    //        /  \
    //       2    3
    //      / \  / \
    //     4  5 6   7

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->left->left->left = new TreeNode(7);
    // root->left->left->left = new TreeNode(8);
    // string type;
    // cin >> type;
    // anyOrder(root, type);
    DFS(root);
    // cout << Tree_height_max(root);
    return 0;
}