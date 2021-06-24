class Node: 
    # A utility function to create a new node 
    def __init__(self ,key): 
        self.data = key 
        self.left = None
        self.right = None
        
def bfs(root):
    
    if root is None:
        return
    
    l=[]
    
    l.append(root)
    
    while(len(l)>0):
        print(l[0].data)
        node=l.pop(0)
        
        if(node.left):
            l.append(node.left)
        if(node.right):
            l.append(node.right)
root = Node(1) 
root.left = Node(2) 
root.right = Node(3) 
root.left.left = Node(4) 
root.left.right = Node(5) 
root.right.left=Node(6)
root.right.right=Node(7)


bfs(root)
