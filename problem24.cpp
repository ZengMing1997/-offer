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
    ListNode* ReverseList(ListNode* pHead) {
      ListNode *ans = NULL;
      ListNode *cur = pHead;
      ListNode *pre = NULL;
      while(cur != NULL)
      {
        ListNode *nex = cur->next;
        if(nex == NULL) ans = cur;
        cur->next = pre;
        pre = cur;
        cur = nex;
      }
      return ans;
    }
};
int main()
{

}