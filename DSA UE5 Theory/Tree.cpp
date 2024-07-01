#include <iostream>

class TreeNode
{
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void InOrderTraversal(TreeNode* node)
{
    if (node == nullptr)
        return;

    InOrderTraversal(node->left);
    std::cout << "Node value: " << node->value << std::endl;
    InOrderTraversal(node->right);
}

void Main()
{
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    InOrderTraversal(root);

    // Cleanup
    delete root->left;
    delete root->right;
    delete root;
}

int main()
{
    Main();
    return 0;
}
