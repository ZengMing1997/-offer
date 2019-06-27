#include <bits/stdc++.h>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
      if(pHead1 == NULL && pHead2 == NULL) return NULL;
      else if(pHead1 == NULL) return pHead2;
      else if(pHead2 == NULL) return pHead1;
      else 
      {
        ListNode *cur = new ListNode(-1);
        ListNode *ans = cur;
        while(pHead1 != NULL && pHead2 != NULL)
        {
          if(pHead1->val > pHead2->val)
          {
            ans->next = pHead2;
            pHead2 = pHead2->next;
            ans = ans->next;
          }
          else 
          {
            ans->next = pHead1;
            pHead1 = pHead1->next;
            ans = ans->next;
          }
        }
        if(pHead1 != NULL)
        {
          ans->next = pHead1;
        }
        if(pHead2 != NULL)
        {
          ans->next = pHead2;
        }
        return cur->next;
      }
    }
};