# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        a=[]
        while head:
            a.append(head.val)
            head=head.next
        counts = {}
        for i in a:
            counts[i] = counts.get(i,0) +1
        ans=[]
        for i in counts.keys():
            if counts[i]<2:
                ans.append(i)
        header=ListNode(0)
        temp=header
        for i in range(len(ans)):
            header.next=ListNode(ans[i])
            header=header.next
        return(temp.next)
