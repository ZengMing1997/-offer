#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
      if(pRoot == NULL) return true;
      return dfs(pRoot->left,pRoot->right);
    }
    bool dfs(TreeNode *l , TreeNode *r)
    {
      if(l == NULL && r == NULL) return true;
      if(l == NULL || r == NULL) return false;
      if(l->val != r->val) return false;
      return dfs(l->left,r->right) && dfs(l->right,r->left);
    }

};
int main()
{

}