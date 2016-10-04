import sys
def check_binary_search_tree_(root):
    return helper(root, -sys.maxint, sys.maxint)
def helper(root, minval, maxval):
    if not root:
        return True
    else:
        if root.data > minval and root.data < maxval:
            return helper(root.left, minval, root.data) and helper(root.right, root.data, maxval)
        else:
            return False