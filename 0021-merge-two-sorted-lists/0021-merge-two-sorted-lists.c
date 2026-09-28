struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

  if(!list1)
    return list2;
  if(!list2)
    return list1;

  struct ListNode *curr1 = list1;
  struct ListNode *curr2 = list2;

  //act as a temp smaller val  
  struct ListNode *small;

  struct ListNode *tail;


  struct ListNode *head = NULL;


  while(curr1 && curr2)
  {
    if((curr1 -> val) < (curr2 -> val))
    {
      if(head == NULL)
      {
        head = curr1;
      }
      else  
        tail -> next = curr1;
    
      
      small = curr1;
      curr1 = curr1 -> next;
    }
    else
    {
      if(head == NULL)
      {
        head = curr2;
      }
      else
        tail -> next = curr2;
      
      small = curr2;
      curr2 = curr2 -> next;
    }
    tail = small;

  }
  if(curr1)
    tail -> next = curr1;
  else tail -> next = curr2;


  return head;

}