class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def levelOrderBottom(self, root: TreeNode) :
        if root == None:
            return([])
        
        tree=[root]
        traversal=[]
        
        if root:
            traversal.append([root.val])
        while tree:
            node=[]
            tra_tree=[]
            for n in tree:
                if n.left:
                    node.append(n.left.val)
                    tra_tree.append(n.left)
                
                if n.right:
                    node.append(n.right.val)
                    tra_tree.append(n.right)
                
            tree=tra_tree
            if node:
                traversal.append(node)
        return(traversal[::-1])
