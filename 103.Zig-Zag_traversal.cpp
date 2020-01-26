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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
       vector<vector<int>> v;
       vector<int> row;
        if(root==NULL)
            return v;
        int i=1;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp!=NULL)
            {
                row.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            else
            {
                if(!q.empty())
                    q.push(NULL);
                 if(i%2==0)
                     reverse(row.begin(),row.end());
                 v.push_back(row);
                row.clear();
                i++;
            }
                
        }
        return v;
    }
};
