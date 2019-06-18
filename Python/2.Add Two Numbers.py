# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: 'ListNode', l2: 'ListNode') -> 'ListNode':
        carry=0
        head=ListNode(0)
        answer=head
        while l1 and l2:
            add=ListNode((l1.val+l2.val+carry)%10)
            carry=1 if (l1.val+l2.val+carry>=10) else 0
            head.next=add
            head=head.next
            l1,l2=l1.next,l2.next
        l=l1 if l1 else l2
        
        while l :
            add=ListNode((l.val+carry)%10)
            carry=1 if (l.val+carry>=10) else 0
            head.next=add
            head=head.next
            l=l.next
        if carry>0:
            head.next=ListNode(1)
        return (answer.next)
   
            
