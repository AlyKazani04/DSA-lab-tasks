class TreeNode 
{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val) {
            data = val;
            left = right = nullptr;
        }
};

TreeNode* rightRotate(TreeNode* oldParent) 
{

// 1. detach left child's right subtree

TreeNode* orphan = oldParent->left->right;

// 2. consider left child to be the new parent

TreeNode* newParent = oldParent->left;

// 3. attach old parent onto right of new parent

newParent->right = oldParent;

// 4. attach new parent's old right subtree as

// left subtree of old parent

oldParent->left = orphan;

oldParent->height = height(oldParent); // update nodes'

newParent.height = height(newParent); // height values

return newParent;

}