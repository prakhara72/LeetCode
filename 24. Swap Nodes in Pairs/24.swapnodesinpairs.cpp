class Solution {
public:
  ListNode *swapPairs(ListNode *head) {
    ListNode *res = head;
    if (res == NULL)
      return res;
    while (head != NULL && head->next != NULL) {
      ListNode *temp = head->next;
      swap(temp->val, head->val);
      ListNode *t2 = temp->next;
      head = t2;
    }

    return res;
  }
};
