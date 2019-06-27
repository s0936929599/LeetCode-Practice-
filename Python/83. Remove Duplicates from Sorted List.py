# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        ans=[]
        while head:
            ans.append(head.val)
            head=head.next
        ans=sorted([x for x in set(ans)])
        
        header=ListNode(0)
        temp=header
        
        for i in range(len(ans)):
            header.next=ListNode(ans[i])
            header=header.next
        return(temp.next)
