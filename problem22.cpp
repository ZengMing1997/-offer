#include <bits/stdc++.h>
using namespace std;
/*struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
      //ListNode *first = pListHead;
      auto p = pListHead;
      for(int i = 0 ; i < k ; i++)
      {
        if(p == NULL) return NULL;
        p = p->next;
      }
      while(p != NULL)
      {
        p = p->next;
        pListHead = pListHead->next;
      }
      return pListHead;
    }
};