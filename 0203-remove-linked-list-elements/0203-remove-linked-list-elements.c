struct ListNode* removeElements(struct ListNode* head, int val)
{
  struct ListNode *curr;
  struct ListNode *prv;
  while(head && head -> val == val)
  {
    head = head -> next;
  }

    if(head == NULL)
        return NULL;
  prv = head;
  curr = prv -> next;

  while(curr)
  {
    if(curr -> val == val)
    {
      prv -> next = curr -> next;
      curr = curr -> next;
    }
    else
    {
      prv = curr;
      curr = curr -> next;  
    }
  }
  return head;
}