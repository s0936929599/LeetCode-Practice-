# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        ans=[]
        while l1 and l2:
            ans.append(l1.val)
            ans.append(l2.val)
            l1=l1.next
            l2=l2.next
        l=l1 if l1 else l2
        while l:
            ans.append(l.val)
            l=l.next
        ans=sorted(ans)
        head=ListNode(0)
        answer=head
        for i in ans:
            head.next=ListNode(i)
            head=head.next
        return(answer.next)
