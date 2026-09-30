bool hasCycle(struct ListNode *head) 
{
  struct ListNode *curr = head;
  struct ListNode *fast = head;

  // struct ListNode *temp;

  // if(temp || temp -> next == NULL)
  //   return false;

  while(fast && fast -> next)
  {
    curr = curr -> next;
    fast = fast ->next -> next;
    if(fast == curr)
      return true; 
  }
  return false;
}