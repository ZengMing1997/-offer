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
    ListNode* Meet(ListNode* pHead)
    {
      if(pHead == NULL) return NULL;
      ListNode* l = pHead->next;
      if(l == NULL) return NULL;
      ListNode* f = l->next;
      while(l != NULL && f != NULL)
      {
        if(l == f) return l;
        l = l->next;
        f = f->next;
        if(f != NULL) f = f->next;
      }
      return NULL;
    }
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
      ListNode* meet = Meet(pHead);
      if(meet == NULL) return NULL;
      int node_num = 1;
      ListNode* first = meet;
      while(first->next != meet)
      {
        first = first->next;
        ++node_num;
      }
      first = pHead;
      for(int i = 0 ; i < node_num; i++)
      {
        first = first->next;
      }
      ListNode* ans = pHead;
      while(ans != first)
      {
        ans = ans->next;
        first = first->next;
      }
      return ans;
    }
};