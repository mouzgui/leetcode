void remove_node(struct ListNode *to_delete, struct ListNode *list)
{
  struct ListNode *prev;
  prev = list;

  struct ListNode *curr;
  while(prev -> next)
  {
    curr = prev -> next;
    if(curr == to_delete)
    {
      prev -> next = curr -> next;
      return;
    }

    prev = prev -> next;
  }
}

struct ListNode* deleteDuplicates(struct ListNode* head) 
{
  struct ListNode *curr;
  struct ListNode *next_curr;


  struct ListNode *new_head = NULL;

  curr = head;
  while(curr)
  {
    if(new_head == NULL)
    {
      new_head = curr;
    }

    next_curr = curr -> next;
    while(next_curr)
    {
      
      if((curr -> val) == (next_curr -> val))
          remove_node(next_curr,head);


      next_curr = next_curr -> next; 
    }

    curr = curr -> next;
  }
  return new_head;
}