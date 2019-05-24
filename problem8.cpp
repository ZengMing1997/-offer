//p65 二叉树的下一个节点
#include <bits/stdc++.h>
using namespace std;
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
class Solution { 
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
      if(pNode == nullptr) return nullptr;
      if(pNode->right != nullptr)
      {
        pNode = pNode->right;
        while(pNode->left != nullptr)
        {
          pNode = pNode->left;
        }
        return pNode;
      }
      if(pNode->next != nullptr)
      {
        while(pNode->next != NULL)
        {
          TreeLinkNode *proot = pNode->next;
          if(proot->left == pNode) return proot;
          pNode = pNode->next;
        }
      }
      return nullptr;
    }
};