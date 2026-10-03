int list_size(struct ListNode *head)
{
  int i = 0;
  while(head)
  {
    i++;
    head = head -> next;
  }
  return i;
}

struct ListNode* middleNode(struct ListNode* head)
{
  int mid = list_size(head) / 2;
  int i = 0;
  
  while(head)
  {
    if(i == mid)
      return head;
    i++;
    head = head -> next;
  }
 return head;
}