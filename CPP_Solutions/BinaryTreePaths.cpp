/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {

        std::vector<string> vec;
        std::string s;

        showPaths(vec, root, s);

        return vec;

    }

private:
    void showPaths(std::vector<string>& vec, TreeNode* root, std::string s){

        if(root==NULL) return;

        if(root->left == NULL && root->right == NULL){
            s.append(std::to_string(root->val));
            vec.push_back(s);
            s = "";
        }
        else{
            s.append(std::to_string(root->val));
            s.append("->");
        }

        showPaths(vec, root->left, s);
        showPaths(vec, root->right, s);

    }
};
