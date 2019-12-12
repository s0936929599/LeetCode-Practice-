class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None

class Traversal(object):
    def __init__(self):
        self.traverse_path = []

    def preorder(self, root):
        if root:
            self.traverse_path.append(root.val)
            self.preorder(root.left)
            self.preorder(root.right)
        return(self.traverse_path)
    def inorder(self,root):
        if root:
            self.inorder(root.left)
            self.traverse_path.append(root.val)
            self.inorder(root.right)
        return(self.traverse_path)
    def postorder(self,root):
        if root:
            self.postorder(root.left)
            self.postorder(root.right)
            self.traverse_path.append(root.val)
        return(self.traverse_path)
        

tn=TreeNode(10)
tn.left=TreeNode(20)
tn.right=TreeNode(30)
tn.left.left=TreeNode(40)
tn.left.right=TreeNode(50)
tn.right.left=TreeNode(60)
tn.right.right=TreeNode(70)
t=Traversal()

print("前序",t.preorder(tn))   #前序 [10, 20, 40, 50, 30, 60, 70]

t=Traversal()
print("中序",t.inorder(tn))   #中序 [40, 20, 50, 10, 60, 30, 70]

t=Traversal()
print("後序",t.postorder(tn))   #後序 [40, 50, 20, 60, 70, 30, 10]
