/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL) return vector<int>{};
    vector<int>ans;
    queue<TreeNode*> queue;
    queue.push(root);
    while(!queue.empty())
    {
        int size= queue.size();
        int currMax = INT_MIN;
        for(int i =0;i<size;i++)
        {
            TreeNode* start = queue.front();
            queue.pop();
            currMax = currMax > start->val ? currMax : start->val;
            if(start->left)
            {
                queue.push(start->left);
            }
            if(start->right)
            {
                queue.push(start->right);
            }
        }
        ans.push_back(currMax);
    }
    return ans;
    }
};
