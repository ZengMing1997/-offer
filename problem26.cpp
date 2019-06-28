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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
      int flag = 0;
      if(pRoot1 != NULL && pRoot2 != NULL)
      {
        if(pRoot1->val == pRoot2->val)
        {
          flag = dfs(pRoot1,pRoot2);
        }
        if(!flag) flag = dfs(pRoot1->left,pRoot2);
        if(!flag) flag = dfs(pRoot1->right,pRoot2);
      }
      return flag;
    }
    bool dfs(TreeNode* a,TreeNode* b)
    {
      if(b == NULL) return true;
      if(a == NULL) return false;
      if(a->val != b->val) return false;
      else 
      {
        return dfs(a->left,b->left) && dfs(a->right,b->right);
      }
    }
};
int main()
{
  
}