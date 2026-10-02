struct ListNode* reverseList(struct ListNode* head) 
{
  struct ListNode*curr = head;
  struct ListNode*next_node;
  struct ListNode*prev = NULL;

  while(head)
  {
    curr = head;
    next_node = curr -> next;
    curr -> next = prev;
    prev = curr;

    head = next_node;
  }
  return prev;

}