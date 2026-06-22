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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (p == NULL && q == NULL) return true;

        if(p==NULL || q==NULL){ 
            return false;

        }


        queue<TreeNode*> qq;
        qq.push(p);
        queue<TreeNode*> rr;

        rr.push(q);

        while(!qq.empty()){
            int size=qq.size();
            for(int i=0;i<size;i++){
                TreeNode* temp1=qq.front();
                qq.pop();

                TreeNode* temp2=rr.front();
                rr.pop();

                if(temp1==NULL && temp2==NULL){
                    continue;
                }

                if(temp1==NULL || temp2==NULL){
                    return false;
                }


                if(temp1->val!=temp2->val){
                    return false;
                }

                
                    qq.push(temp1->left);
                

                
                    rr.push(temp2->left);
                

                
                    qq.push(temp1->right);
                
               
                    rr.push(temp2->right);
                
                

            }

        }
        return true;

        
    }
};
