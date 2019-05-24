//p58从头打印链表
#include <bits/stdc++.h>
using namespace std;
struct Listnode
{
  int val;
  Listnode *nex;
};
void reserve(Listnode *head)
{
  if(head == NULL) return ;
  if(head->nex != NULL)
  {
    reserve(head->nex);
  }
  printf("%d ",head->val);
}
