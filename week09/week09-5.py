# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        #要做對照表, 把0..25對照成字母'a'..'z'
        table = "abcdefghijklmnopqrstuvwxyz"#字母對照表
        def helper(root,nowStr):#nowstr累積的字串
            #if root==None: return nowStr#樹下沒有東西時,右邊累積的字串,就是結果
            nextStr=table[root.val]+nowStr
            if root.left==None and  root.right==None: return nextStr#最後的葉子,沒有左右了
            if root.left==None: return helper(root.right, nextStr)#左邊空的,只能往右跑
            if root.right==None: return helper(root.left, nextStr)
            left=helper(root.left, nextStr)
            right=helper(root.right, nextStr)
            return min(left, right)
        #print("table[0] is",table[0])
        #print("table[25] is",table[25])
        return helper(root, '')
        