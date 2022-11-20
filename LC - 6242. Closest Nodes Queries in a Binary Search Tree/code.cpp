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
private:
    void inOrder(TreeNode* root, vector<int> &arr) {
        if(!root) return;
        inOrder(root->left, arr);
        arr.push_back(root->val);
        inOrder(root->right, arr);
    }
public:
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> arr;
        inOrder(root, arr);
        
        vector<vector<int>> res;
        
        for(int i = 0; i < queries.size(); i++) {
            int mini = -1, maxi = -1;
            int idx = lower_bound(arr.begin(), arr.end(), queries[i]) - arr.begin();
            if(idx != arr.size()) {
                maxi = arr[idx];
                if(maxi == queries[i]) {
                    mini = maxi;
                } else {
                    if(idx == 0) mini = -1;
                    else mini = arr[idx - 1];
                }
            } 
            else mini = arr.back();
            res.push_back({mini, maxi});
        }
        
        return res;
    }
};
