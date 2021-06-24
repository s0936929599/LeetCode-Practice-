class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class Linked_list:
    def __init__(self):
        self.header=None
        
    def print_Ll(self):
        temp=self.header
        while temp!=None:
            print(temp.data)
            temp=temp.next
    
    def push(self,data):
        data=node(data)
        data.next=self.header
        self.header=data
        
    def insert_after(self,pre_data,data):
        data=node(data)
        tmp=self.header
        while tmp.data!=pre_data:
            
            tmp=tmp.next
        data.next=tmp.next
        tmp.next=data
    def reverse_l(self):
        pre=None
        current=self.header
        while(current):
            next1=current.next
            current.next=pre
            pre=current
            current=next1
        self.header=pre
    def delete_node(self,number):
        
        if self.header.data==number:
            self.header=self.header.next
        else:
            current=self.header
            while(current.data!=number):
                pre=current
                current=current.next
            
            pre.next=current.next
        
a=Linked_list()

a.header=node(3)
a.header.next=node(2)
a.header.next.next=node(8)
#a.delete_node(30)
#a.reverse_l()
a.print_Ll()
