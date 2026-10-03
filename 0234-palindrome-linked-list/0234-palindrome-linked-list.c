bool isPalindrome(struct ListNode* head)
{ 
  struct ListNode *curr = head;
  char normal[1000000];
  char reversed[1000000];
  int i = 0;

  while(curr)
  {
    normal[i] = (curr -> val) + '0';
    i++;
    curr = curr -> next;
  }
  normal[i] = '\0';
  int j = 0;
  while(i > 0)
  {
    i--;
    reversed[j] = normal[i];
    j++;
  }
  reversed[j] = '\0';
  int s = 0;

  while(j > 0)
  {
    
    if(normal[s] != reversed[s])
      return false;
    s++;
    j--;
  }
  return true;
}