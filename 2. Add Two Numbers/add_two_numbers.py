# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        temp = p = ListNode(0)
        carry = 0
        while(l1 or l2 or carry):
            su = carry
            if l1: 
                su += l1.val
                l1 = l1.next 
            if l2:
                su += l2.val
                l2 = l2.next
            carry = su // 10
            unitsSum = su % 10
            p.next = ListNode(unitsSum)
            p = p.next
        return temp.next
